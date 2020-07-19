#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define STRICT
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

// TODO properly acknowledge articles Timer is based upon.

class Timer
{
	public:
		Timer()
		{
			LARGE_INTEGER largeFreq;
			QueryPerformanceFrequency(&largeFreq);
			freq = largeFreq.QuadPart;
		}

		long long GetCount()
		{
			LARGE_INTEGER count;
			QueryPerformanceCounter(&count);
			return count.QuadPart;
		}

		double CalcTimeDelta(long long count1, long long count2)
		{
			return (
				((double)count2/(double)freq -
				(double)count1/(double)freq)
				* 1000000.0
			);
		}

	private:
		long long freq;
};
