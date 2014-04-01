from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for cryptographicanomaly "coin control"',
      author='Gavin Andresen',
      author_email='gavin@cryptographicanomalyfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
