// LinAlgTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinearAlgebra.h"

#include <iostream>
//using namespace LinAlg;
int main()
{

	LinAlg::Matrix A;

	//A.setDimensions(2, 3);
	std::cout << A.getColumns() << A.getRows();



    return 0;
}

