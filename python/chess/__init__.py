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

def main():
    app = QApplication(sys.argv)
    web = QWebView()
    web.load(QUrl(URL))
    web.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
