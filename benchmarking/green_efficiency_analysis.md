# Green Tech Efficiency Analysis

## Measurement Methodology

All programs were compiled with the same command: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`, and all of them were run in the same Holberton sandbox (Ubuntu 22.04). Time was measured with `clock()` from `<time.h>`, and the difference between two `clock()` values was divided by `CLOCKS_PER_SEC` to get seconds.

Each program was run three times, not once, because one run can be affected by other things happening on the machine. Three runs show if the result is stable.

In the instrumentation lab, I used one timer for each phase (build, process, reduce) so I can see the time of each part, and one bigger timer for TOTAL that starts before the first phase and stops after the last one. The `printf` lines are placed after all timers stop, because printing is not part of the work I want to measure.

## Observed Performance Differences

Baseline loop (100,000,000 iterations): 0.226080 s, 0.226317 s and 0.226437 s. The same code gave very close but not identical times. The difference between the fastest and the slowest run is less than 0.0004 seconds, so the measurement is stable.

Algorithm comparison (average of 3 runs):

| Implementation | Average time |
|----------------|--------------|
| Naive | 2.745293 s |
| Single-pass | 0.000106 s |

The naive version is about 25,800 times slower. It has a loop inside a loop: for every number, it goes back and counts all the numbers before it again, so it does around 1.25 billion steps. The single-pass version goes over the numbers only one time (50,000 steps). This shows that the algorithm is the biggest reason for the difference, not the computer.

Instrumentation lab (3 runs): TOTAL was 0.000740 s, 0.000758 s and 0.000711 s. PROCESS was the longest phase (about 0.000311 to 0.000319 s), BUILD_DATA was second (about 0.000259 to 0.000297 s) and REDUCE was the shortest (about 0.000135 to 0.000139 s). In every run TOTAL was bigger than each phase, which is what I expected because TOTAL contains all of them.

## Relation Between Runtime and Energy Consumption

When a program takes more time, the CPU stays busy for longer, and a busy CPU uses more energy. So runtime can be used as a simple way to compare energy use. In my results, the naive algorithm keeps the CPU working for about 2.7 seconds to answer a question that the single-pass algorithm answers in about 0.0001 seconds. If code like this runs many times on many servers, the extra energy becomes very large. Writing efficient code is a simple way to make software greener.

## Limitations of the Experiment

- I did not measure real energy in watts. I only measured time and used it as a proxy for energy.
- The sandbox is a shared machine, so other users and processes can change the numbers a little.
- The instrumentation lab times are very small (less than one millisecond), so small changes look big and `clock()` is less precise at this size.
- The two algorithms in the comparison gave different results (625025000 and 25000), so they do not do exactly the same amount of work. The comparison shows the cost of the extra loop, not two equal solutions.

## Practical Engineering Takeaway

Before writing a program, I should think about how much work the CPU will do, because time, results and energy all depend on it. Choosing a better algorithm, like replacing a loop inside a loop with one pass, can save much more time than any small change. Also, I should always measure more than one time before I trust a number.
