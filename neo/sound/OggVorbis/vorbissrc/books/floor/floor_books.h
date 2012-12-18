/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE OggVorbis SOFTWARE CODEC SOURCE CODE.   *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS LIBRARY SOURCE IS     *
 * GOVERNED BY A BSD-STYLE SOURCE LICENSE INCLUDED WITH THIS SOURCE *
 * IN 'COPYING'. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.       *
 *                                                                  *
 * THE OggVorbis SOURCE CODE IS (C) COPYRIGHT 1994-2002             *
 * by the Xiph.Org Foundation http://www.xiph.org/                  *
 *                                                                  *
 ********************************************************************

 function: static codebooks autogenerated by huff/huffbuld
 last modified: $Id: floor_books.h,v 1.3 2002/07/11 06:41:01 xiphmont Exp $

 ********************************************************************/

#include "codebook.h"
static long _huff_lengthlist_line_1024x27_0sub0[] = {
	5, 5, 5, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5,
	6, 5, 6, 5, 6, 5, 7, 5, 7, 5, 7, 5, 8, 5, 8, 6,
	8, 6, 9, 6, 9, 6, 9, 6, 10, 6, 10, 6, 11, 6, 11, 6,
	11, 6, 12, 6, 12, 7, 12, 7, 12, 7, 12, 7, 12, 7, 12, 7,
	12, 7, 12, 7, 12, 7, 12, 7, 12, 8, 12, 8, 11, 8, 11, 8,
	12, 9, 11, 9, 9, 10, 11, 9, 12, 9, 12, 12, 14, 13, 13, 14,
	13, 13, 13, 12, 14, 16, 20, 20, 21, 14, 14, 15, 21, 21, 21, 20,
	21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 20, 20, 20, 20, 20, 20,
};

static static_codebook _huff_book_line_1024x27_0sub0 = {
	1, 128,
	_huff_lengthlist_line_1024x27_0sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_1sub0[] = {
	2, 5, 5, 4, 5, 4, 5, 4, 5, 4, 6, 4, 6, 5, 6, 5,
	7, 5, 7, 6, 8, 6, 8, 6, 8, 6, 9, 6, 10, 6, 10, 6,
};

static static_codebook _huff_book_line_1024x27_1sub0 = {
	1, 32,
	_huff_lengthlist_line_1024x27_1sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_1sub1[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	9, 5, 10, 4, 10, 4, 9, 4, 9, 3, 9, 4, 9, 4, 9, 4,
	9, 4, 9, 4, 9, 4, 8, 4, 8, 4, 8, 5, 9, 5, 9, 6,
	8, 6, 9, 7, 10, 8, 10, 9, 10, 10, 10, 12, 11, 13, 12, 13,
	13, 15, 13, 14, 13, 14, 12, 15, 13, 15, 14, 15, 13, 16, 14, 16,
	14, 15, 14, 14, 14, 16, 15, 18, 15, 18, 16, 18, 18, 18, 18, 18,
	18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 17,
};

static static_codebook _huff_book_line_1024x27_1sub1 = {
	1, 128,
	_huff_lengthlist_line_1024x27_1sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_2sub0[] = {
	1, 5, 5, 5, 5, 5, 5, 5, 6, 5, 6, 5, 6, 5, 6, 5,
	6, 6, 7, 6, 7, 7, 8, 8, 9, 8, 9, 9, 9, 9, 10, 10,
};

static static_codebook _huff_book_line_1024x27_2sub0 = {
	1, 32,
	_huff_lengthlist_line_1024x27_2sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_2sub1[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	3, 3, 4, 3, 4, 4, 5, 4, 5, 5, 5, 5, 6, 5, 6, 6,
	7, 6, 7, 7, 7, 7, 7, 7, 8, 9, 8, 9, 8, 10, 8, 11,
	8, 12, 9, 13, 9, 14, 9, 14, 8, 12, 8, 14, 9, 14, 8, 12,
	8, 11, 8, 11, 8, 11, 9, 11, 10, 11, 10, 12, 10, 12, 11, 12,
	12, 12, 12, 12, 11, 12, 11, 13, 11, 13, 12, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13,
};

static static_codebook _huff_book_line_1024x27_2sub1 = {
	1, 128,
	_huff_lengthlist_line_1024x27_2sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_3sub1[] = {
	0, 4, 5, 4, 5, 3, 5, 3, 5, 3, 5, 4, 4, 4, 5, 4,
	5, 5,
};

static static_codebook _huff_book_line_1024x27_3sub1 = {
	1, 18,
	_huff_lengthlist_line_1024x27_3sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_3sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 3, 3, 3, 3, 4, 4, 4, 5, 4, 6, 5, 6, 5, 7,
	5, 9, 5, 10, 6, 11, 6, 12, 7, 13, 8, 15, 8, 15, 9, 15,
	9, 15,
};

static static_codebook _huff_book_line_1024x27_3sub2 = {
	1, 50,
	_huff_lengthlist_line_1024x27_3sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_3sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 2, 9, 2, 9, 2, 9, 4, 9, 6, 9, 7, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
};

static static_codebook _huff_book_line_1024x27_3sub3 = {
	1, 128,
	_huff_lengthlist_line_1024x27_3sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_4sub1[] = {
	0, 4, 5, 4, 5, 4, 6, 3, 6, 3, 5, 3, 5, 3, 6, 4,
	6, 4,
};

static static_codebook _huff_book_line_1024x27_4sub1 = {
	1, 18,
	_huff_lengthlist_line_1024x27_4sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_4sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 4, 2, 4, 2, 5, 3, 5, 4, 6, 6, 6, 6, 7, 7,
	7, 8, 8, 8, 8, 8, 9, 8, 9, 9, 9, 9, 9, 10, 10, 11,
	10, 11,
};

static static_codebook _huff_book_line_1024x27_4sub2 = {
	1, 50,
	_huff_lengthlist_line_1024x27_4sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_4sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 3, 3, 3, 6, 4, 6, 4, 5, 5, 7, 4, 8, 5, 9,
	4, 9, 5, 9, 5, 9, 6, 9, 5, 9, 7, 9, 7, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
};

static static_codebook _huff_book_line_1024x27_4sub3 = {
	1, 128,
	_huff_lengthlist_line_1024x27_4sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_class1[] = {
	2, 9, 8, 14, 7, 13, 11, 14, 1, 5, 3, 7, 4, 10, 7, 12,
};

static static_codebook _huff_book_line_1024x27_class1 = {
	1, 16,
	_huff_lengthlist_line_1024x27_class1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_class2[] = {
	1, 3, 2, 5, 4, 7, 6, 7,
};

static static_codebook _huff_book_line_1024x27_class2 = {
	1, 8,
	_huff_lengthlist_line_1024x27_class2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_class3[] = {
	1, 5, 6, 19, 5, 8, 10, 19, 9, 10, 15, 19, 19, 19, 19, 19,
	4, 7, 9, 19, 6, 7, 10, 19, 11, 11, 15, 19, 19, 19, 19, 19,
	8, 11, 13, 19, 8, 11, 14, 19, 13, 13, 17, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
	3, 7, 9, 19, 6, 8, 11, 19, 11, 11, 15, 19, 19, 19, 19, 19,
	5, 7, 11, 19, 6, 7, 11, 19, 11, 10, 14, 19, 19, 19, 19, 19,
	8, 11, 15, 19, 8, 10, 14, 19, 13, 13, 16, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
	6, 9, 11, 19, 8, 10, 12, 19, 15, 14, 17, 19, 19, 19, 19, 19,
	5, 8, 11, 19, 7, 9, 12, 19, 14, 11, 16, 19, 19, 19, 19, 19,
	9, 10, 18, 19, 9, 10, 15, 19, 14, 16, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
	16, 17, 19, 19, 16, 17, 17, 19, 19, 19, 19, 19, 19, 19, 19, 19,
	12, 14, 16, 19, 12, 12, 16, 19, 19, 19, 19, 19, 19, 19, 19, 19,
	18, 18, 19, 19, 17, 16, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 18,
};

static static_codebook _huff_book_line_1024x27_class3 = {
	1, 256,
	_huff_lengthlist_line_1024x27_class3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_1024x27_class4[] = {
	1, 4, 8, 12, 4, 6, 8, 21, 9, 8, 10, 21, 20, 16, 18, 20,
	2, 6, 8, 20, 7, 6, 9, 19, 11, 9, 10, 20, 17, 15, 16, 20,
	5, 8, 11, 19, 8, 8, 10, 15, 12, 10, 12, 15, 20, 20, 15, 20,
	17, 20, 20, 20, 15, 20, 20, 19, 20, 20, 16, 19, 20, 20, 20, 20,
};

static static_codebook _huff_book_line_1024x27_class4 = {
	1, 64,
	_huff_lengthlist_line_1024x27_class4,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_0sub0[] = {
	5, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5,
	6, 5, 6, 5, 6, 5, 6, 5, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 6, 7, 6, 7, 6, 7, 6, 7, 6, 7, 6, 7, 6, 7, 6,
	8, 7, 8, 7, 8, 7, 8, 7, 9, 7, 9, 7, 9, 8, 10, 8,
	10, 8, 10, 8, 10, 8, 10, 9, 11, 9, 11, 9, 10, 9, 10, 10,
	11, 10, 11, 11, 11, 11, 12, 12, 13, 14, 13, 14, 16, 16, 16, 16,
	16, 16, 15, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
	16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 15, 15,
};

static static_codebook _huff_book_line_128x11_0sub0 = {
	1, 128,
	_huff_lengthlist_line_128x11_0sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_1sub0[] = {
	2, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	6, 5, 6, 5, 6, 5, 7, 6, 7, 6, 7, 6, 8, 6, 8, 6,
};

static static_codebook _huff_book_line_128x11_1sub0 = {
	1, 32,
	_huff_lengthlist_line_128x11_1sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_1sub1[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	6, 3, 6, 3, 7, 3, 7, 4, 8, 4, 8, 4, 8, 4, 9, 4,
	10, 5, 9, 5, 10, 5, 10, 5, 10, 5, 12, 6, 12, 6, 10, 6,
	10, 7, 10, 8, 10, 8, 10, 9, 11, 9, 12, 11, 10, 11, 11, 13,
	12, 12, 12, 13, 10, 13, 10, 13, 10, 13, 10, 13, 11, 13, 10, 13,
	10, 13, 10, 13, 10, 13, 10, 13, 11, 12, 13, 13, 13, 13, 13, 13,
	13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
};

static static_codebook _huff_book_line_128x11_1sub1 = {
	1, 128,
	_huff_lengthlist_line_128x11_1sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_2sub1[] = {
	0, 4, 5, 4, 5, 4, 5, 3, 4, 3, 4, 4, 4, 4, 4, 5,
	5, 5,
};

static static_codebook _huff_book_line_128x11_2sub1 = {
	1, 18,
	_huff_lengthlist_line_128x11_2sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_2sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 2, 3, 3, 4, 3, 5, 4, 5, 5, 6, 5, 6, 6, 6,
	6, 8, 6, 10, 7, 10, 8, 10, 8, 10, 10, 10, 10, 10, 10, 10,
	10, 10,
};

static static_codebook _huff_book_line_128x11_2sub2 = {
	1, 50,
	_huff_lengthlist_line_128x11_2sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_2sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
};

static static_codebook _huff_book_line_128x11_2sub3 = {
	1, 128,
	_huff_lengthlist_line_128x11_2sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_3sub1[] = {
	0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 4,
	5, 4,
};

static static_codebook _huff_book_line_128x11_3sub1 = {
	1, 18,
	_huff_lengthlist_line_128x11_3sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_3sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 5, 3, 5, 3, 6, 4, 7, 4, 7, 4, 7, 4, 8, 4,
	8, 4, 9, 4, 9, 4, 9, 5, 10, 5, 11, 5, 12, 6, 13, 6,
	13, 7,
};

static static_codebook _huff_book_line_128x11_3sub2 = {
	1, 50,
	_huff_lengthlist_line_128x11_3sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_3sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 7, 2, 6, 2, 7, 3, 8, 4, 7, 6, 9, 7, 9, 7,
	9, 9, 9, 8, 9, 8, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
};

static static_codebook _huff_book_line_128x11_3sub3 = {
	1, 128,
	_huff_lengthlist_line_128x11_3sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_class1[] = {
	1, 6, 3, 7, 2, 5, 4, 7,
};

static static_codebook _huff_book_line_128x11_class1 = {
	1, 8,
	_huff_lengthlist_line_128x11_class1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_class2[] = {
	1, 5, 11, 14, 4, 11, 13, 14, 10, 14, 13, 14, 14, 14, 13, 13,
	2, 6, 11, 13, 5, 11, 12, 13, 11, 12, 13, 13, 13, 13, 13, 13,
	4, 8, 12, 13, 5, 9, 11, 13, 12, 13, 13, 13, 13, 13, 13, 13,
	13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
};

static static_codebook _huff_book_line_128x11_class2 = {
	1, 64,
	_huff_lengthlist_line_128x11_class2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x11_class3[] = {
	6, 7, 11, 16, 6, 7, 10, 16, 11, 9, 13, 15, 15, 15, 15, 15,
	4, 4, 7, 14, 4, 4, 6, 14, 8, 6, 8, 15, 15, 15, 15, 15,
	4, 4, 6, 15, 3, 2, 4, 13, 6, 5, 6, 14, 15, 12, 11, 14,
	11, 11, 13, 15, 9, 8, 10, 15, 11, 10, 11, 15, 15, 15, 15, 15,
};

static static_codebook _huff_book_line_128x11_class3 = {
	1, 64,
	_huff_lengthlist_line_128x11_class3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_0sub0[] = {
	5, 5, 5, 5, 5, 5, 5, 5, 6, 5, 6, 5, 6, 5, 6, 5,
	6, 5, 6, 5, 6, 5, 6, 5, 7, 5, 7, 5, 7, 6, 7, 6,
	7, 6, 8, 6, 8, 6, 8, 6, 8, 6, 8, 6, 8, 7, 9, 7,
	9, 7, 9, 7, 9, 7, 9, 7, 9, 7, 10, 7, 10, 8, 10, 8,
	11, 8, 11, 8, 11, 8, 12, 8, 12, 8, 12, 8, 12, 9, 12, 9,
	12, 9, 12, 9, 13, 9, 13, 10, 13, 10, 13, 11, 14, 12, 14, 13,
	14, 14, 16, 15, 17, 17, 19, 18, 19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 18, 18, 18, 18, 18,
};

static static_codebook _huff_book_line_128x17_0sub0 = {
	1, 128,
	_huff_lengthlist_line_128x17_0sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_1sub0[] = {
	2, 5, 5, 4, 5, 4, 5, 4, 5, 4, 5, 5, 5, 5, 6, 5,
	6, 5, 6, 6, 7, 6, 7, 6, 8, 6, 8, 7, 9, 7, 9, 8,
};

static static_codebook _huff_book_line_128x17_1sub0 = {
	1, 32,
	_huff_lengthlist_line_128x17_1sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_1sub1[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	4, 2, 5, 3, 5, 3, 6, 4, 6, 4, 7, 4, 8, 5, 8, 5,
	8, 6, 9, 6, 9, 7, 9, 8, 10, 8, 10, 9, 10, 10, 10, 10,
	10, 12, 10, 14, 11, 15, 12, 15, 11, 15, 11, 15, 11, 14, 11, 15,
	11, 14, 11, 13, 10, 12, 10, 14, 10, 14, 11, 13, 10, 12, 11, 15,
	12, 15, 13, 15, 12, 13, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 14, 14, 14,
};

static static_codebook _huff_book_line_128x17_1sub1 = {
	1, 128,
	_huff_lengthlist_line_128x17_1sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_2sub1[] = {
	0, 4, 5, 4, 7, 3, 8, 3, 9, 3, 10, 2, 12, 3, 12, 4,
	11, 6,
};

static static_codebook _huff_book_line_128x17_2sub1 = {
	1, 18,
	_huff_lengthlist_line_128x17_2sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_2sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 7, 1, 8, 2, 9, 3, 9, 7, 9, 7, 9, 7, 8, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8,
};

static static_codebook _huff_book_line_128x17_2sub2 = {
	1, 50,
	_huff_lengthlist_line_128x17_2sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_2sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
};

static static_codebook _huff_book_line_128x17_2sub3 = {
	1, 128,
	_huff_lengthlist_line_128x17_2sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_3sub1[] = {
	0, 4, 4, 4, 5, 4, 5, 3, 5, 3, 5, 3, 5, 4, 6, 4,
	6, 4,
};

static static_codebook _huff_book_line_128x17_3sub1 = {
	1, 18,
	_huff_lengthlist_line_128x17_3sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_3sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 5, 3, 6, 3, 6, 3, 7, 4, 8, 4, 8, 4, 9, 4,
	9, 4, 10, 4, 10, 5, 11, 5, 11, 5, 12, 5, 12, 6, 12, 6,
	12, 7,
};

static static_codebook _huff_book_line_128x17_3sub2 = {
	1, 50,
	_huff_lengthlist_line_128x17_3sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_3sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 7, 1, 7, 3, 6, 3, 6, 4, 6, 5, 6, 8, 7, 10,
	7, 11, 7, 11, 8, 11, 9, 11, 7, 11, 8, 11, 8, 11, 10, 11,
	11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
};

static static_codebook _huff_book_line_128x17_3sub3 = {
	1, 128,
	_huff_lengthlist_line_128x17_3sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_class1[] = {
	1, 3, 4, 7, 2, 6, 5, 7,
};

static static_codebook _huff_book_line_128x17_class1 = {
	1, 8,
	_huff_lengthlist_line_128x17_class1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_class2[] = {
	1, 2, 7, 14, 4, 9, 13, 14, 8, 14, 14, 14, 14, 14, 14, 14,
	3, 5, 10, 14, 8, 14, 14, 14, 11, 14, 14, 14, 14, 14, 14, 14,
	7, 10, 14, 14, 12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13,
};

static static_codebook _huff_book_line_128x17_class2 = {
	1, 64,
	_huff_lengthlist_line_128x17_class2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x17_class3[] = {
	2, 6, 11, 19, 5, 9, 12, 19, 10, 11, 13, 19, 19, 19, 19, 19,
	2, 5, 8, 19, 4, 6, 8, 19, 8, 8, 9, 19, 19, 16, 19, 19,
	3, 6, 8, 19, 3, 5, 7, 18, 8, 8, 9, 16, 16, 11, 16, 19,
	14, 14, 14, 19, 10, 10, 11, 19, 16, 12, 14, 19, 19, 19, 19, 19,
};

static static_codebook _huff_book_line_128x17_class3 = {
	1, 64,
	_huff_lengthlist_line_128x17_class3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x4_0sub0[] = {
	2, 2, 2, 2,
};

static static_codebook _huff_book_line_128x4_0sub0 = {
	1, 4,
	_huff_lengthlist_line_128x4_0sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x4_0sub1[] = {
	0, 0, 0, 0, 3, 2, 3, 2, 3, 3,
};

static static_codebook _huff_book_line_128x4_0sub1 = {
	1, 10,
	_huff_lengthlist_line_128x4_0sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x4_0sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 4, 4, 4, 4,
	4, 3, 4, 4, 5, 3, 6, 4, 6,
};

static static_codebook _huff_book_line_128x4_0sub2 = {
	1, 25,
	_huff_lengthlist_line_128x4_0sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x4_0sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 5, 2, 6, 3, 6, 3,
	7, 4, 7, 5, 7, 5, 7, 6, 8, 8, 9, 10, 10, 16, 10, 16,
	10, 14, 10, 14, 11, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
};

static static_codebook _huff_book_line_128x4_0sub3 = {
	1, 64,
	_huff_lengthlist_line_128x4_0sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x4_class0[] = {
	8, 8, 8, 14, 7, 7, 8, 13, 7, 6, 7, 11, 11, 11, 10, 13,
	9, 9, 10, 16, 8, 8, 9, 12, 7, 7, 7, 11, 11, 11, 10, 12,
	11, 11, 11, 14, 10, 10, 10, 14, 9, 8, 9, 12, 13, 14, 12, 14,
	16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
	8, 7, 8, 11, 7, 7, 7, 11, 6, 6, 6, 10, 10, 10, 10, 14,
	8, 8, 8, 12, 7, 7, 8, 11, 6, 7, 7, 10, 10, 10, 10, 13,
	10, 10, 10, 12, 10, 9, 9, 12, 9, 9, 9, 12, 12, 13, 12, 14,
	16, 16, 16, 16, 16, 14, 16, 16, 14, 14, 16, 16, 16, 16, 16, 16,
	7, 6, 5, 7, 6, 6, 5, 6, 6, 5, 5, 5, 9, 10, 9, 10,
	8, 7, 6, 7, 7, 6, 5, 6, 6, 6, 5, 6, 10, 10, 9, 9,
	10, 9, 7, 8, 9, 8, 7, 7, 8, 7, 6, 7, 11, 11, 10, 9,
	16, 13, 14, 16, 14, 14, 13, 15, 16, 14, 12, 13, 16, 16, 14, 16,
	9, 8, 7, 8, 8, 8, 7, 8, 8, 7, 6, 7, 10, 10, 9, 12,
	9, 9, 8, 8, 9, 8, 7, 8, 8, 8, 6, 7, 10, 10, 9, 12,
	11, 10, 9, 10, 10, 9, 7, 9, 9, 8, 6, 9, 12, 11, 10, 13,
	12, 16, 16, 16, 12, 13, 12, 16, 15, 12, 11, 14, 16, 16, 16, 16,
};

static static_codebook _huff_book_line_128x4_class0 = {
	1, 256,
	_huff_lengthlist_line_128x4_class0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_0sub1[] = {
	0, 3, 3, 3, 3, 3, 3, 3, 3,
};

static static_codebook _huff_book_line_128x7_0sub1 = {
	1, 9,
	_huff_lengthlist_line_128x7_0sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_0sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 4, 3, 4, 4, 4,
	5, 4, 5, 4, 5, 4, 6, 4, 6,
};

static static_codebook _huff_book_line_128x7_0sub2 = {
	1, 25,
	_huff_lengthlist_line_128x7_0sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_0sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 5, 3, 5, 3, 6, 4,
	6, 4, 6, 4, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 5, 5,
	6, 7, 8, 10, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
};

static static_codebook _huff_book_line_128x7_0sub3 = {
	1, 64,
	_huff_lengthlist_line_128x7_0sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_1sub1[] = {
	0, 3, 3, 3, 3, 2, 4, 3, 4,
};

static static_codebook _huff_book_line_128x7_1sub1 = {
	1, 9,
	_huff_lengthlist_line_128x7_1sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_1sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 5, 3, 6, 3, 7, 3,
	8, 3, 9, 3, 10, 3, 11, 4, 11,
};

static static_codebook _huff_book_line_128x7_1sub2 = {
	1, 25,
	_huff_lengthlist_line_128x7_1sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_1sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 12, 2, 9, 3, 10, 4,
	12, 5, 12, 6, 12, 10, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11,
	11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
};

static static_codebook _huff_book_line_128x7_1sub3 = {
	1, 64,
	_huff_lengthlist_line_128x7_1sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_class0[] = {
	10, 7, 8, 14, 10, 7, 7, 12, 11, 8, 8, 13, 16, 16, 16, 16,
	8, 5, 5, 10, 7, 4, 4, 8, 8, 5, 5, 9, 16, 16, 16, 16,
	7, 4, 5, 7, 6, 3, 3, 6, 8, 5, 5, 7, 16, 14, 13, 16,
	9, 7, 7, 10, 7, 4, 4, 7, 9, 6, 5, 6, 15, 13, 11, 14,
};

static static_codebook _huff_book_line_128x7_class0 = {
	1, 64,
	_huff_lengthlist_line_128x7_class0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_128x7_class1[] = {
	8, 12, 16, 16, 10, 14, 16, 16, 12, 15, 16, 16, 16, 16, 16, 16,
	7, 11, 15, 16, 7, 11, 16, 16, 10, 12, 16, 16, 16, 16, 16, 16,
	9, 15, 16, 16, 9, 12, 16, 16, 11, 15, 16, 16, 16, 16, 16, 16,
	16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
	6, 10, 13, 16, 7, 10, 15, 16, 9, 11, 16, 16, 16, 16, 16, 16,
	4, 8, 13, 16, 5, 8, 15, 16, 7, 9, 15, 16, 16, 16, 16, 16,
	6, 12, 16, 16, 6, 10, 15, 16, 9, 10, 14, 16, 16, 16, 16, 16,
	14, 16, 16, 16, 12, 14, 16, 16, 15, 16, 16, 16, 16, 16, 16, 16,
	4, 9, 11, 16, 5, 9, 13, 16, 7, 9, 15, 16, 16, 16, 16, 16,
	2, 7, 11, 16, 3, 6, 11, 16, 5, 7, 12, 16, 16, 16, 16, 16,
	4, 9, 14, 16, 4, 7, 13, 16, 6, 8, 13, 16, 16, 16, 16, 16,
	11, 14, 16, 16, 10, 16, 14, 16, 11, 16, 16, 16, 16, 16, 16, 16,
	7, 13, 16, 16, 9, 13, 15, 16, 11, 13, 16, 16, 16, 16, 16, 16,
	5, 10, 14, 16, 6, 10, 15, 16, 9, 10, 16, 16, 16, 16, 16, 16,
	7, 13, 16, 16, 6, 10, 16, 16, 9, 12, 16, 16, 16, 16, 16, 16,
	11, 16, 16, 16, 10, 16, 16, 16, 13, 16, 16, 16, 16, 16, 16, 16,
};

static static_codebook _huff_book_line_128x7_class1 = {
	1, 256,
	_huff_lengthlist_line_128x7_class1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x4_0sub0[] = {
	1, 3, 2, 3,
};

static static_codebook _huff_book_line_256x4_0sub0 = {
	1, 4,
	_huff_lengthlist_line_256x4_0sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x4_0sub1[] = {
	0, 0, 0, 0, 2, 2, 3, 3, 3, 3,
};

static static_codebook _huff_book_line_256x4_0sub1 = {
	1, 10,
	_huff_lengthlist_line_256x4_0sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x4_0sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 4, 3, 4,
	4, 4, 5, 4, 5, 5, 6, 4, 6,
};

static static_codebook _huff_book_line_256x4_0sub2 = {
	1, 25,
	_huff_lengthlist_line_256x4_0sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x4_0sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 4, 3, 4, 3, 4, 4,
	5, 4, 5, 5, 6, 5, 7, 6, 8, 7, 9, 8, 9, 9, 10, 12,
	15, 15, 15, 15, 15, 15, 15, 15, 14, 14, 14, 14, 14, 14, 14, 14,
};

static static_codebook _huff_book_line_256x4_0sub3 = {
	1, 64,
	_huff_lengthlist_line_256x4_0sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x4_class0[] = {
	4, 5, 6, 11, 5, 5, 6, 10, 7, 6, 5, 6, 14, 13, 10, 10,
	6, 6, 6, 10, 6, 6, 6, 10, 7, 7, 7, 9, 9, 10, 9, 12,
	9, 8, 8, 11, 8, 8, 8, 10, 8, 8, 9, 11, 8, 9, 9, 13,
	18, 18, 18, 18, 16, 17, 18, 18, 12, 13, 14, 18, 14, 14, 10, 12,
	5, 5, 6, 12, 6, 5, 6, 10, 7, 7, 6, 7, 13, 12, 9, 12,
	6, 6, 6, 11, 6, 6, 6, 9, 7, 7, 7, 10, 10, 10, 9, 12,
	9, 8, 8, 12, 8, 8, 7, 11, 8, 8, 8, 11, 9, 9, 8, 10,
	18, 18, 17, 18, 18, 18, 15, 18, 16, 14, 12, 18, 14, 12, 10, 11,
	8, 7, 7, 12, 8, 7, 7, 10, 8, 7, 6, 6, 11, 10, 9, 10,
	8, 8, 7, 11, 8, 7, 7, 9, 8, 8, 7, 9, 10, 10, 9, 9,
	10, 9, 8, 12, 9, 9, 8, 11, 10, 9, 8, 9, 8, 8, 7, 9,
	18, 18, 18, 18, 18, 18, 18, 18, 17, 16, 14, 18, 13, 12, 11, 13,
	12, 12, 13, 16, 11, 10, 10, 16, 12, 12, 9, 7, 15, 12, 11, 11,
	14, 14, 14, 14, 12, 11, 11, 18, 14, 12, 10, 11, 18, 13, 11, 13,
	18, 18, 18, 17, 17, 16, 15, 17, 18, 15, 16, 18, 16, 12, 11, 11,
	18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 17, 18, 18, 13, 12, 15,
};

static static_codebook _huff_book_line_256x4_class0 = {
	1, 256,
	_huff_lengthlist_line_256x4_class0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_0sub1[] = {
	0, 2, 3, 3, 3, 3, 4, 3, 4,
};

static static_codebook _huff_book_line_256x7_0sub1 = {
	1, 9,
	_huff_lengthlist_line_256x7_0sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_0sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 3, 4, 3, 5, 3,
	6, 3, 6, 4, 6, 4, 7, 5, 7,
};

static static_codebook _huff_book_line_256x7_0sub2 = {
	1, 25,
	_huff_lengthlist_line_256x7_0sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_0sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 5, 2, 5, 3, 5, 3,
	6, 3, 6, 4, 7, 6, 7, 8, 7, 9, 8, 9, 9, 9, 10, 9,
	11, 13, 11, 13, 10, 10, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12,
};

static static_codebook _huff_book_line_256x7_0sub3 = {
	1, 64,
	_huff_lengthlist_line_256x7_0sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_1sub1[] = {
	0, 3, 3, 3, 3, 2, 4, 3, 4,
};

static static_codebook _huff_book_line_256x7_1sub1 = {
	1, 9,
	_huff_lengthlist_line_256x7_1sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_1sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 3, 4, 3, 4, 4,
	5, 4, 6, 5, 6, 7, 6, 8, 8,
};

static static_codebook _huff_book_line_256x7_1sub2 = {
	1, 25,
	_huff_lengthlist_line_256x7_1sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_1sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 4, 3, 6, 3, 7,
	3, 8, 5, 8, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7,
};

static static_codebook _huff_book_line_256x7_1sub3 = {
	1, 64,
	_huff_lengthlist_line_256x7_1sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_class0[] = {
	7, 5, 5, 9, 9, 6, 6, 9, 12, 8, 7, 8, 11, 8, 9, 15,
	6, 3, 3, 7, 7, 4, 3, 6, 9, 6, 5, 6, 8, 6, 8, 15,
	8, 5, 5, 9, 8, 5, 4, 6, 10, 7, 5, 5, 11, 8, 7, 15,
	14, 15, 13, 13, 13, 13, 8, 11, 15, 10, 7, 6, 11, 9, 10, 15,
};

static static_codebook _huff_book_line_256x7_class0 = {
	1, 64,
	_huff_lengthlist_line_256x7_class0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_256x7_class1[] = {
	5, 6, 8, 15, 6, 9, 10, 15, 10, 11, 12, 15, 15, 15, 15, 15,
	4, 6, 7, 15, 6, 7, 8, 15, 9, 8, 9, 15, 15, 15, 15, 15,
	6, 8, 9, 15, 7, 7, 8, 15, 10, 9, 10, 15, 15, 15, 15, 15,
	15, 13, 15, 15, 15, 10, 11, 15, 15, 13, 13, 15, 15, 15, 15, 15,
	4, 6, 7, 15, 6, 8, 9, 15, 10, 10, 12, 15, 15, 15, 15, 15,
	2, 5, 6, 15, 5, 6, 7, 15, 8, 6, 7, 15, 15, 15, 15, 15,
	5, 6, 8, 15, 5, 6, 7, 15, 9, 6, 7, 15, 15, 15, 15, 15,
	14, 12, 13, 15, 12, 10, 11, 15, 15, 15, 15, 15, 15, 15, 15, 15,
	7, 8, 9, 15, 9, 10, 10, 15, 15, 14, 14, 15, 15, 15, 15, 15,
	5, 6, 7, 15, 7, 8, 9, 15, 12, 9, 10, 15, 15, 15, 15, 15,
	7, 7, 9, 15, 7, 7, 8, 15, 12, 8, 9, 15, 15, 15, 15, 15,
	13, 13, 14, 15, 12, 11, 12, 15, 15, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
	13, 13, 13, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
	15, 12, 13, 15, 15, 12, 13, 15, 15, 14, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 13, 15, 15, 15, 15, 15, 15, 15, 15, 15,
};

static static_codebook _huff_book_line_256x7_class1 = {
	1, 256,
	_huff_lengthlist_line_256x7_class1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_0sub0[] = {
	4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 6, 5, 6, 6, 6, 6, 5, 6, 6, 7, 6, 7, 6, 7, 6,
	7, 6, 8, 7, 8, 7, 8, 7, 8, 7, 8, 7, 9, 7, 9, 7,
	9, 7, 9, 8, 9, 8, 10, 8, 10, 8, 10, 7, 10, 6, 10, 8,
	10, 8, 11, 7, 10, 7, 11, 8, 11, 11, 12, 12, 11, 11, 12, 11,
	13, 11, 13, 11, 13, 12, 15, 12, 13, 13, 14, 14, 14, 14, 14, 15,
	15, 15, 16, 14, 17, 19, 19, 18, 18, 18, 18, 18, 18, 18, 18, 18,
	18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
};

static static_codebook _huff_book_line_512x17_0sub0 = {
	1, 128,
	_huff_lengthlist_line_512x17_0sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_1sub0[] = {
	2, 4, 5, 4, 5, 4, 5, 4, 5, 5, 5, 5, 5, 5, 6, 5,
	6, 5, 6, 6, 7, 6, 7, 6, 8, 7, 8, 7, 8, 7, 8, 7,
};

static static_codebook _huff_book_line_512x17_1sub0 = {
	1, 32,
	_huff_lengthlist_line_512x17_1sub0,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_1sub1[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	4, 3, 5, 3, 5, 4, 5, 4, 5, 4, 5, 5, 5, 5, 6, 5,
	6, 5, 7, 5, 8, 6, 8, 6, 8, 6, 8, 6, 8, 7, 9, 7,
	9, 7, 11, 9, 11, 11, 12, 11, 14, 12, 14, 16, 14, 16, 13, 16,
	14, 16, 12, 15, 13, 16, 14, 16, 13, 14, 12, 15, 13, 15, 13, 13,
	13, 15, 12, 14, 14, 15, 13, 15, 12, 15, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
};

static static_codebook _huff_book_line_512x17_1sub1 = {
	1, 128,
	_huff_lengthlist_line_512x17_1sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_2sub1[] = {
	0, 4, 5, 4, 4, 4, 5, 4, 4, 4, 5, 4, 5, 4, 5, 3,
	5, 3,
};

static static_codebook _huff_book_line_512x17_2sub1 = {
	1, 18,
	_huff_lengthlist_line_512x17_2sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_2sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 4, 3, 4, 3, 4, 4, 5, 4, 5, 4, 6, 4, 6, 5,
	6, 5, 7, 5, 7, 6, 8, 6, 8, 6, 8, 7, 8, 7, 9, 7,
	9, 8,
};

static static_codebook _huff_book_line_512x17_2sub2 = {
	1, 50,
	_huff_lengthlist_line_512x17_2sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_2sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 3, 3, 3, 3, 4, 3, 4, 4, 5, 5, 6, 6, 7, 7,
	7, 8, 8, 11, 8, 9, 9, 9, 10, 11, 11, 11, 9, 10, 10, 11,
	11, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
	10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
	10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
};

static static_codebook _huff_book_line_512x17_2sub3 = {
	1, 128,
	_huff_lengthlist_line_512x17_2sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_3sub1[] = {
	0, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 5, 4, 5,
	5, 5,
};

static static_codebook _huff_book_line_512x17_3sub1 = {
	1, 18,
	_huff_lengthlist_line_512x17_3sub1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_3sub2[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 2, 3, 3, 4, 3, 5, 4, 6, 4, 6, 5, 7, 6, 7,
	6, 8, 6, 8, 7, 9, 8, 10, 8, 12, 9, 13, 10, 15, 10, 15,
	11, 14,
};

static static_codebook _huff_book_line_512x17_3sub2 = {
	1, 50,
	_huff_lengthlist_line_512x17_3sub2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_3sub3[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 4, 8, 4, 8, 4, 8, 4, 8, 5, 8, 5, 8, 6, 8,
	4, 8, 4, 8, 5, 8, 5, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
};

static static_codebook _huff_book_line_512x17_3sub3 = {
	1, 128,
	_huff_lengthlist_line_512x17_3sub3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_class1[] = {
	1, 2, 3, 6, 5, 4, 7, 7,
};

static static_codebook _huff_book_line_512x17_class1 = {
	1, 8,
	_huff_lengthlist_line_512x17_class1,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_class2[] = {
	3, 3, 3, 14, 5, 4, 4, 11, 8, 6, 6, 10, 17, 12, 11, 17,
	6, 5, 5, 15, 5, 3, 4, 11, 8, 5, 5, 8, 16, 9, 10, 14,
	10, 8, 9, 17, 8, 6, 6, 13, 10, 7, 7, 10, 16, 11, 13, 14,
	17, 17, 17, 17, 17, 16, 16, 16, 16, 15, 16, 16, 16, 16, 16, 16,
};

static static_codebook _huff_book_line_512x17_class2 = {
	1, 64,
	_huff_lengthlist_line_512x17_class2,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

static long _huff_lengthlist_line_512x17_class3[] = {
	2, 4, 6, 17, 4, 5, 7, 17, 8, 7, 10, 17, 17, 17, 17, 17,
	3, 4, 6, 15, 3, 3, 6, 15, 7, 6, 9, 17, 17, 17, 17, 17,
	6, 8, 10, 17, 6, 6, 8, 16, 9, 8, 10, 17, 17, 15, 16, 17,
	17, 17, 17, 17, 12, 15, 15, 16, 12, 15, 15, 16, 16, 16, 16, 16,
};

static static_codebook _huff_book_line_512x17_class3 = {
	1, 64,
	_huff_lengthlist_line_512x17_class3,
	0, 0, 0, 0, 0,
	NULL,
	NULL,
	NULL,
	NULL,
	0
};

