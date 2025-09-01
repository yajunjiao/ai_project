import requests
from bs4 import BeautifulSoup
import time
import os


def get_chapter_content(chapter_url):
    try:
        time.sleep(1 + float(time.time() % 1))  # 随机延时
        response = requests.get(chapter_url, headers=headers)
        response.encoding = response.apparent_encoding
        if response.status_code != 200:
            return None

        soup = BeautifulSoup(response.text, 'html.parser')
        content_div = soup.find('div', class_='text p_pad')  # 关键选择器
        if not content_div:
            return None

        paragraphs = content_div.find_all('p')
        return '\n'.join([p.get_text(strip=False) for p in paragraphs])
    except Exception as e:
        return None

# 确保《三国演义》文件夹存在
save_dir = '《三国演义1》'
if not os.path.exists(save_dir):
    os.makedirs(save_dir)

# 《三国演义》目录页URL
base_url = 'https://www.shicimingju.com'
catalog_url = 'https://www.shicimingju.com/book/sanguoyanyi.html'

# 请求头，模拟浏览器访问
headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/114.0.0.0 Safari/537.36',
    'Referer': 'https://www.shicimingju.com/',
    'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
    'Accept-Language': 'zh-CN,zh;q=0.9'
}
def download_chapter_content():
    try:
        # 获取目录页内容
        print('开始获取《三国演义》目录...')
        response = requests.get(catalog_url, headers=headers)
        response.encoding = 'UTF-8'
        catalog_html = response.text

        # 解析目录页
        soup = BeautifulSoup(catalog_html, 'lxml')

        # 查找所有章节链接
        # chapter_links = soup.select('.book-mulu li a')
        # 基于URL特征提取章节链接（不受class变化影响）
        # 查找所有章节链接
        chapter_links = soup.find_all('a', href=lambda x: x and '/book/sanguoyanyi/' in x and x.endswith('.html'))
        print(f'共找到{len(chapter_links)}个章节')
        # 备选方案：基于章节标题特征（包含"回"字）
        if not chapter_links:
            chapter_links = soup.find_all('a', text=lambda t: t and '回' in t)

        print(f'共找到{len(chapter_links)}个章节，开始下载...')

        # 添加以下调试代码
        print(f'目录页请求状态码: {response.status_code}')  # 正常应为200
        if response.status_code != 200:
            print(f'请求被拦截！响应内容: {response.text[:200]}')  # 打印前200字符
        # 保存HTML到文件以便分析
        with open('目录页.html', 'w', encoding='utf-8') as f:
            f.write(response.text)
        print('目录页HTML已保存到当前目录，请检查是否为正常页面')

        # 遍历每个章节链接
        for i, link in enumerate(chapter_links):
            # 获取章节标题和URL
            chapter_title = link.text.strip()
            chapter_url = base_url + link['href']

            print("chapter_url = " + chapter_url + " chapter_title = " + chapter_title)

            # 获取章节内容
            content = get_chapter_content(chapter_url)
            if not content:
                print(f'警告：无法获取{chapter_title}内容')
                continue

            # 保存内容到文件
            file_path = os.path.join(save_dir, f'{chapter_title}.text')
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)

            print(f'已保存: {file_path}')
            # 添加延时，避免请求过于频繁
            time.sleep(1)

        print('《三国演义》全部章节下载完成！')

    except Exception as e:
        print(f'获取目录页时出错，错误信息：{str(e)}')


if __name__ == '__main__':
    download_chapter_content()

