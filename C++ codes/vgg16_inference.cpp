#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm> 

#include "temp_weights_includer.h"
#include "vgg_16_1.h"
#include "vgg_16_2.h"
#include "vgg_16_3.h"
#include "vgg_16_4.h"
#include "vgg_16_5.h"
#include "vgg_16_6.h"
#include "vgg_16_7.h"
#include "vgg_16_8.h"
#include "vgg_16_9.h"
#include "vgg_16_10.h"
#include "vgg_16_11.h"
using namespace std;





vector<vector<vector<int>>> image = {
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 15, 15, 15},
		{ 96, 96, 96},
		{ 218, 218, 218},
		{ 122, 122, 122},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 71, 71, 71},
		{ 103, 103, 103},
		{ 211, 211, 211},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 80, 80, 80},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 15, 15, 15},
		{ 22, 22, 22},
		{ 128, 128, 128},
		{ 162, 162, 162},
		{ 232, 232, 232},
		{ 232, 232, 232},
		{ 249, 249, 249},
		{ 253, 253, 253},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 106, 106, 106},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 6, 6, 6},
		{ 190, 190, 190},
		{ 252, 252, 252},
		{ 253, 253, 253},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 253, 253, 253},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 80, 80, 80},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 13, 13, 13},
		{ 173, 173, 173},
		{ 252, 252, 252},
		{ 253, 253, 253},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 226, 226, 226},
		{ 147, 147, 147},
		{ 147, 147, 147},
		{ 138, 138, 138},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 76, 76, 76},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 89, 89, 89},
		{ 168, 168, 168},
		{ 176, 176, 176},
		{ 97, 97, 97},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 8, 8, 8},
		{ 157, 157, 157},
		{ 253, 253, 253},
		{ 216, 216, 216},
		{ 18, 18, 18},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 123, 123, 123},
		{ 252, 252, 252},
		{ 245, 245, 245},
		{ 126, 126, 126},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 156, 156, 156},
		{ 252, 252, 252},
		{ 231, 231, 231},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 253, 253, 253},
		{ 252, 252, 252},
		{ 231, 231, 231},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 11, 11, 11},
		{ 108, 108, 108},
		{ 6, 6, 6},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 253, 253, 253},
		{ 252, 252, 252},
		{ 143, 143, 143},
		{ 0, 0, 0},
		{ 89, 89, 89},
		{ 114, 114, 114},
		{ 147, 147, 147},
		{ 12, 12, 12},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 4, 4, 4},
		{ 43, 43, 43},
		{ 43, 43, 43},
		{ 255, 255, 255},
		{ 253, 253, 253},
		{ 253, 253, 253},
		{ 253, 253, 253},
		{ 253, 253, 253},
		{ 132, 132, 132},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 29, 29, 29},
		{ 142, 142, 142},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 253, 253, 253},
		{ 252, 252, 252},
		{ 245, 245, 245},
		{ 168, 168, 168},
		{ 80, 80, 80},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 4, 4, 4},
		{ 142, 142, 142},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 252, 252, 252},
		{ 253, 253, 253},
		{ 210, 210, 210},
		{ 27, 27, 27},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 32, 32, 32},
		{ 237, 237, 237},
		{ 252, 252, 252},
		{ 226, 226, 226},
		{ 252, 252, 252},
		{ 253, 253, 253},
		{ 168, 168, 168},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 67, 67, 67},
		{ 94, 94, 94},
		{ 24, 24, 24},
		{ 218, 218, 218},
		{ 253, 253, 253},
		{ 168, 168, 168},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 212, 212, 212},
		{ 255, 255, 255},
		{ 107, 107, 107},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 128, 128, 128},
		{ 242, 242, 242},
		{ 253, 253, 253},
		{ 63, 63, 63},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 72, 72, 72},
		{ 252, 252, 252},
		{ 253, 253, 253},
		{ 63, 63, 63},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 64, 64, 64},
		{ 252, 252, 252},
		{ 225, 225, 225},
		{ 21, 21, 21},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 11, 11, 11},
		{ 174, 174, 174},
		{ 211, 211, 211},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	},
	{
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0},
		{ 0, 0, 0}
	}
};

vector<vector<vector<int>>> padImage(vector<vector<vector<int>>> image, int padSize)
{
    int height = image.size();
    int width = image[0].size();
    int depth = image[0][0].size();

    // Initialize paddedImage with the desired size
    vector<vector<vector<int>>> paddedImage(height + 2 * padSize, vector<vector<int>>(width + 2 * padSize, vector<int>(depth, 0)));

    // Filling pixel values in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            for (int c = 0; c < depth; c++)
            {
                paddedImage[i + padSize][j + padSize][c] = image[i][j][c];
            }
        }
    }

    return paddedImage;
}


// Helper function to retrieve single filter from filters tensor
vector<vector<vector<int>>> getSingleFilter(vector<vector<vector<vector<int>>>> filters, int index) {
    
    vector<vector<vector<int>>> single_filter;
    for (int i = 0; i < filters.size(); i++) {
        vector<vector<int>> temp1;
        for (int j = 0; j < filters[0].size(); j++) {
            vector<int> temp2;
            for (int k = 0; k < filters[0][0].size(); k++) {
                temp2.push_back(filters[i][j][k][index]);
            }
            temp1.push_back(temp2);
        }
        single_filter.push_back(temp1);
    }
    return single_filter;
}
// Function to perform a 2D convolution

// Function to print a 3D image vector
void printImage(vector<vector<vector<int>>> &image)
{
    cout << "Number of channels: " << image[0][0].size() << endl;

    int channels = image[0][0].size();

    for (int k = 0; k < channels; k++)
    {
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = 0; j < image[0].size(); j++)
            {
                cout << image[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl
             << endl;
    }
}

vector<vector<int>> Conv2D_single_filter(vector<vector<vector<int>>> image, vector<vector<vector<int>>> filter, int padding, int stride)
{
    // Assuming all filters are square filters
    int filter_size = filter.size();

    // Padding the image
    vector<vector<vector<int>>> padded_image = padImage(image, padding);

    int height = padded_image.size();
    int width = padded_image[0].size();

    // Output image dimensions
    int out_height = ceil(float(height - filter_size) / float(stride)) + 1;
    int out_width = ceil(float(width - filter_size) / float(stride)) + 1;

    vector<vector<int>> op_image(out_height, vector<int>(out_width, 0));

    for (int i = 0; i < out_height; i++)
    {
        for (int j = 0; j < out_width; j++)
        {
            for (int k = 0; k < filter_size; k++)
            {
                for (int l = 0; l < filter_size; l++)
                {
                    for (int m = 0; m < padded_image[0][0].size(); m++)
                    {
                        op_image[i][j] += padded_image[i * stride + k][j * stride + l][m] * filter[k][l][m];
                    }
                }
            }
        }
    }

    return op_image;
}

vector<vector<vector<int>>> Conv2D(vector<vector<vector<int>>> image, vector<vector<vector<vector<int>>>> filters, vector<int> bias,int padding, int stride)
{
    

    // n is the number of filters
    int n = filters.size(); // Number of filters

    // Stores the final output of convolution of n filters
    vector<vector<vector<int>>> op_image;

    for (int i = 0; i < n; i++)
    {
        vector<vector<int>> temp1 = Conv2D_single_filter(image, filters[i], padding, stride);
        op_image.push_back(temp1);
    }

    vector<vector<vector<int>>> final_image;

    for (int i = 0; i < op_image[0].size(); i++)
    {
        vector<vector<int>> temp1;
        for (int j = 0; j < op_image[0][0].size(); j++)
        {
            vector<int> temp2;

            for (int k = 0; k < n; k++)
            {
                temp2.push_back(op_image[k][i][j]);
            }
            temp1.push_back(temp2);
        }
        final_image.push_back(temp1);
    }

    // Adding bias
    for(int i=0;i<final_image.size();i++){
        for(int j=0;j<final_image[0].size();j++){
            for(int k=0;k<final_image[0][0].size();k++){
                final_image[i][j][k]+=bias[k];
            }
        }
    }
    // cout<<"done"<<endl;
    return final_image;
}

vector<vector<vector<int>>> MaxPool(vector<vector<vector<int>>> image, int filter_size, int stride) {
    int height = image.size();
    int width = image[0].size();
    int depth = image[0][0].size();

    // Calculate new height and width after applying stride and filter_size
    int new_height = (height - filter_size) / stride + 1;
    int new_width = (width - filter_size) / stride + 1;

    // Initialize pooled_image with the new dimensions and set all elements to 0
    vector<vector<vector<int>>> pooled_image(new_height, vector<vector<int>>(new_width, vector<int>(depth, 0)));

    for (int d = 0; d < depth; d++) {
        for (int i = 0; i < new_height; i++) {
            for (int j = 0; j < new_width; j++) {
                // Find the max value in the filter region
                int maxVal = -int(INT_MAX); // Use FLT_MAX for the smallest possible float value
                for (int fi = 0; fi < filter_size; fi++) {
                    for (int fj = 0; fj < filter_size; fj++) {
                        int current_i = i * stride + fi;
                        int current_j = j * stride + fj;
                        if (current_i < height && current_j < width) {
                            maxVal = max(maxVal, image[current_i][current_j][d]);
                        }
                    }
                }
                pooled_image[i][j][d] = maxVal;
            }
        }
    }

    return pooled_image;
}

vector<vector<vector<int>>> activation(vector<vector<vector<int>>> image, string activation)
{

    if (activation == "relu")
    {
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = 0; j < image[0].size(); j++)
            {
                for (int k = 0; k < image[0][0].size(); k++)
                {
                    image[i][j][k] = max(image[i][j][k], int(0));
                }
            }
        }
    }

    else
    {
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = 0; j < image[0].size(); j++)
            {
                for (int k = 0; k < image[0][0].size(); k++)
                {
                    image[i][j][k] = int(1) / int(1 + exp(-image[i][j][k]));
                }
            }
        }
    }

    return image;
}

vector<int> flatten(vector<vector<vector<int>>> image)
{
    vector<int> flattened_image;

    for (int i = 0; i < image.size(); i++)
    {
        for (int j = 0; j < image[0].size(); j++)
        {
            for (int k = 0; k < image[0][0].size(); k++)
            {
                flattened_image.push_back(image[i][j][k]);
            }
        }
    }

    return flattened_image;
}

vector<int> activation_flattened(vector<int> image_flat, string activation)
{
    if (activation == "relu")
    {
        for (int i = 0; i < image_flat.size(); i++)
        {
            image_flat[i] = max(image_flat[i], (0));
        }
    }

    else
    {
        for (int i = 0; i < image_flat.size(); i++)
        {
            image_flat[i] = 1 /(int) (1 + exp(image_flat[i]));
        }
    }

    return image_flat;
}

// Weights of each neuron are written along rows
vector<int> fc(vector<int> flat_image, vector<vector<int>> weights,vector<int> bias)
{
    vector<int> output(weights[0].size());

    for (int i = 0; i < weights[0].size(); i++)
    {
        float res = 0;
        for (int j = 0; j < weights.size(); j++)
        {
            res += weights[j][i] * flat_image[j];
        }
        output[i] = res;  // Store the result directly in the output vector
    }

    // Adding bias
    for(int i=0;i<output.size();i++){
        output[i]+=bias[i];
    }
    return output;
}


vector<int> softmax(vector<int> flat_image)
{
    int sum = 0;
    vector<int> output(flat_image.size());

    // First, calculate the sum of exponentials of all elements
    for (int i = 0; i < flat_image.size(); i++)
    {
        sum += (int)exp(flat_image[i]);
    }

    // cout<<sum<<endl;

    // Then, compute softmax output for each element
    for (int i = 0; i < flat_image.size(); i++)
    {
        output[i] = exp(flat_image[i]) / sum;
    }

    return output;
}

int main(){

    auto conv1 = Conv2D(image, f1, b1,1, 1);
    conv1 = activation(conv1, "relu");

    auto conv2 = Conv2D(conv1, f2, b2,1, 1);
    conv2 = activation(conv2, "relu");
    conv2 = MaxPool(conv2, 2, 2);

    auto conv3 = Conv2D(conv2, f3, b3,1, 1);
    conv3 = activation(conv3, "relu");

    auto conv4 = Conv2D(conv3, f4, b4,1, 1);
    conv4 = activation(conv4, "relu");
    conv4 = MaxPool(conv4,2,2);

    auto conv5 = Conv2D(conv4, f5, b5,1, 1);
    conv5 = activation(conv5, "relu");
    
    auto conv6 = Conv2D(conv5, f6, b6,1, 1);
    conv6 = activation(conv6, "relu");

    auto conv7 = Conv2D(conv6, f7, b7,1, 1);
    conv7 = activation(conv7, "relu");
    conv7 = MaxPool(conv7,2,2);
    
    auto conv8 = Conv2D(conv7, f8, b8,1, 1);
    conv8 = activation(conv8, "relu");

    auto conv9 = Conv2D(conv8, f9, b9,1, 1);
    conv9 = activation(conv9, "relu");

    auto conv10 = Conv2D(conv9, f10, b10,1, 1);
    conv10 = activation(conv10, "relu");
    conv10 = MaxPool(conv10, 2, 2);

    auto conv11 = Conv2D(conv10, f11, b11,1, 1);
    conv11 = activation(conv11, "relu");

    auto conv12 = Conv2D(conv11, f12, b12,1, 1);
    conv12 = activation(conv12, "relu");

    auto conv13 = Conv2D(conv12, f13, b13,1, 1);
    conv13 = activation(conv13, "relu");
    conv13 = MaxPool(conv13, 2, 2);
    
    auto conv13_flat = flatten(conv13);

    auto conv14 = fc(conv13_flat, w1,wb1);
    conv14 = activation_flattened(conv14, "relu");

    auto conv15 = fc(conv14, w2,wb2);
    conv15 = activation_flattened(conv15, "relu");

    auto conv16 = fc(conv15, w3,wb3);
    conv16 = activation_flattened(conv16, "relu");

    int category_inferred=0;
    float maxim = conv16[0]; // Initialize maxim with the first element
    for (int i = 1; i < 1000; i++) // Start the loop from index 1
    {
        if (conv16[i] > maxim)
        {
            maxim = conv16[i];
            category_inferred = i;
        }
    }

    cout <<endl<< endl<<"Category inferred: " << category_inferred << endl;






}