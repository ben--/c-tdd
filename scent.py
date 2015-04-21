from sniffer.api import *
import subprocess as sp

watch_paths = ['CMakeLists.txt', 'src/', 'test/']

@file_validator
def normal_files(filename):
    return not filename.endswith('~')

@runnable
def execute_ninja_test(*args):
    ret = sp.call(['ninja'], cwd='build')
    if ret != 0: return False

    ret = sp.call(['ctest', '-V'], cwd='build')
    if ret != 0: return False

    return True
