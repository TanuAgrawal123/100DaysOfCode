#!/usr/bin/env python3
#above line is called as shebang
"""Retrieve and print words from a URL.
Usages:

    python3 Basic_Python.ipynb <url>
"""
import sys
from urllib.request import urlopen
def fetch_words(url):
    """Fetch a list of words from url 
    Args:
        url:The url of a UTF-8 text document
    Returns:
        A list of strings containing the words
        from the document
    """
    with urlopen(url) as story:
        story_words = []
        for line in story:
            line_words = line.decode('utf-8').split()
            for word in line_words:
                story_words.append(word)
    return story_words


def print_items(items): 
    """"Print item one per line
    Args:
        An iterable series of printable items.
    """
    for item in items:
        print(item)
def main():

    """Print each words from a text document from a url
    Args:
        None
    """
    url = sys.argv[1] # accepts command line argvs
    words = fetch_words(url)
    print_items(words)
    
        
if __name__ == '__main__':
    main()
    
    
