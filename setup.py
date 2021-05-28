#!/usr/bin/env python

from setuptools import setup, find_packages

setup(
    name='DCNv2',
    version='2.0.0',
    description='Deformable Convolutional Networks v2 (DCNv2) with Pytorch 1.8+ & JIT Compilation',
    author='Torben Teepe',
    author_email='torben@tee.pe',
    url='https://gitlab.lrz.de/tteepe/DCNv2',
    packages=find_packages(),
    package_data={
        "": ["src/*.cpp",
             "src/**/*.cpp",
             "src/**/*.h",
             "src/**/*.cu"],
    }
)
