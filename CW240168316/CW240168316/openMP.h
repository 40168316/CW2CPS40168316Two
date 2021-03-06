#pragma once

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <vector>
#include <mutex>
#include <omp.h>
#include <math.h>

using namespace std;
using namespace std::chrono;

class openMP
{
public:
	openMP();
	~openMP();

	// Methods which are called by from main and run the four algorithms using OpenMP Parallel For
	void wheelFactorizationOpenMP(int n);
	void sundaramOpenMP(int inputNumber);
	void atkinOpenMp(int limit);
	void eratosthenesOpenMP(int n);
};

