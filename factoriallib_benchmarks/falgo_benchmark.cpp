#include "benchmark/benchmark.h"
#include "falgo.h"

static void BM_SimpleRecursion(benchmark::State& state) {
    for (auto _ : state) {
        for (ll i = 0; i < 21; i++) {
            falgo::simple_recursion(i);
        }
    }
}

static void BM_FactNaive(benchmark::State& state) {
    for (auto _ : state) {
        for (ll i = 0; i < 21; i++) {
            falgo::fact_naive(i);
        }
    }
}

BENCHMARK(BM_SimpleRecursion);
BENCHMARK(BM_FactNaive);

BENCHMARK_MAIN();
