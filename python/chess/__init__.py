#!/usr/bin/python

'''
GUI for the C++ Chess Library.

AUTHOR

Ari Makela <hauva@iki.fi>
'''

from PyQt4.QtCore import *
from PyQt4.QtGui import *
from PyQt4.QtWebKit import *

import sys

URL = 'https://github.com/hauva69/chess'

def mainwindow():
    web = QWebView()
    web.load(QUrl(URL))
    web.show()
    
def main():
    app = QApplication(sys.argv)
    mainwindow()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
