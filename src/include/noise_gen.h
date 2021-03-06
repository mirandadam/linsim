// ---------------------------------------------------------------------
// NoiseGen.h: interface for the CNoiseGen class.
//
// ---------------------------------------------------------------------
// Copyright 2000, Moe Wheatley AE4JY <ae4jy@mindspring.com>
// Modified  2013, Dave Freese W1HKJ  <w1hkj@w1hkj.com>
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either version 2
//of the License, or any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the
//
//  Free Software Foundation, Inc.
//  51 Franklin Street, Fifth Floor
//  Boston, MA  02110-1301 USA.
//
// ---------------------------------------------------------------------

#ifndef NOISEGEN_H
#define NOISEGEN_H

#include "filter_tables.h"

// pathsim original

class CNoiseGen  
{
public:
	void InitNoiseGen();
	void AddBWLimitedNoise(int bufsize,double* pIn, double siggain, double RMSlevel);
	CNoiseGen();
	virtual ~CNoiseGen();

private:
	double m_pQue[HILBPFIR_LENGTH];
	int m_FirState;
};

/* linsim implementation
class CNoiseGen  
{
public:
	void InitNoiseGen();
	void AddBWLimitedNoise(int bufsize,double* pIn, double siggain, double RMSlevel);
	CNoiseGen();
	virtual ~CNoiseGen();

private:
	double m_pQue[HILBPFIR_LENGTH];
	int m_FirState;
};
*/

#endif
