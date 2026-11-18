## C vs. Python: Prime Number Benchmarking

# Overview
This project explores the performance differences between C and Python when finding prime numbers.
The goal was to compare how quickly both languages could interpret and complete the same task using equivalent algorithms.

## How the Algorithm Works

A prime number is a number greater than 1 that is divisble by 1 and itself.
Both programs check whether a number is prime by testing possible divisors up to its square root. If a divisor divides the number evenly, the number is not prime.
The programs count how many primes exist up to a specified limit.

## Benchmarking Method

I tested three input limits:
- 10,000
- 100,000
- 1,000,000

For each limit, I ran both programs five times using the Mac Terminal's time command

I used the median execution time to reduce the influence of unusually slow or fast measurements. 

The C program was compiled using GCC command.

| Input Limit | C (seconds) | Python (seconds) |
|---|---:|---:|
| 10,000 | 0.004 | 0.027 |
| 100,000 | 0.008 | 0.178 |
| 1,000,000 | 0.146 | 4.219 |

Both programs produced matching prime counts at every input limit.

## Interesting Discoveries
1. C had a shorter median execution time than Python at every tested input size.
2. The observed performance difference became larger as the input size increased.
3. Some individual trials were unusually slow, demonstrating why repeated measurements are important.
4. Benchmark results depend on factors such as complier optimizations, system activity, and measurement methods.

## How to Run the Programs
# C
Compile: 

**gcc -O2 -Wall -Wextra -o primes_c primes.c**

Run:

**time ./primes_c**

# Python
Run:
**time python3 primes.py**
To change the input size, modify the limit variable in both sources files. 

Recompile C after changing its source code.

## Limitations
The Terminal's time command measures total elapsed time, including program startup and shutdown.

The experiment was conducted on one computer, so results may differ on other systems.

The experiment compares these particular implementations and does not establish that C is always than Python.

## Conclusion
This experiment helped me understand how programming language implementation, compiler optimization, and benchmarking methodologies can affect program performance.
It also showed me why repeating measurements is important before drawing conclusions.
