#pragma once

#include "llama-impl.h"

struct llama_sampling {
    std::mt19937 rng;

    int64_t t_sample_us = 0;

    int32_t n_sample = 0; // number of tokens sampled

    llama_model * model = NULL;
};
