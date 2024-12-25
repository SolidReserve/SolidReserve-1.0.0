from distutils.core import setup
setup(name='olidspendfrom',
      version='1.0',
      description='Command-line utility for solidreserve "coin control"',
      author='Gavin Andresen',
      author_email='gavin@solidreservefoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
