#!bin/usr/python
# encoding: utf-8
"""
  Project Euler: Problem 1
      - Multiples of 3 and 5 -

  URL: https://projecteuler.net/problem=1
       http://odz.sakura.ne.jp/projecteuler/index.php?cmd=read&page=Problem%201q
"""


ans = 0
for i in range(0, 1000):
    if i % 3 == 0 or i % 5 == 0:
        ans += i

print("sum = {0}".format(ans))

