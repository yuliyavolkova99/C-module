from distutils.core import setup, Extension

module1 = Extension(
	'sortP', 
	 sources = ['sortP.c'] 
)

setup(
	name = 'sortP',              
	version = '1.1.1',               
	description = 'Simple module', 
	ext_modules= [module1]         
)
