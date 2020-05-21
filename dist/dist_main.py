import subprocess
import os
import timeit

BASE_DIR = os.path.dirname(os.path.realpath(__file__))

if subprocess.call(['make', '-C', BASE_DIR]) != 0:  # return value
    raise RuntimeError('Cannot compile dis: {}'.format(BASE_DIR))

from dist import dist


if __name__ == '__main__':
    start = timeit.default_timer()
    dist()
    end = timeit.default_timer() - start
    print("time: ", end*1000)


