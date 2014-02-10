/* 
 * File:   ContactCalculator.h
 * Author: anganar
 *
 * Created on April 30, 2013, 3:18 PM
 */

#ifndef GCM_CONTACT_CALCULATOR_H_
#define GCM_CONTACT_CALCULATOR_H_  1

#include <string>

#include "util/ElasticMatrix3D.h"

using namespace std;

namespace gcm
{
	class CalcNode;
	/*
	 * Base class for inner points calculators
	 */
	class ContactCalculator {
	public:
		/*
		 * Destructor
		 */
		virtual ~ContactCalculator() = 0;
		/*
		 * Calculate next state for the given node
		 */
		virtual void do_calc(CalcNode* cur_node, CalcNode* new_node, CalcNode* virt_node, ElasticMatrix3D* matrix, float* values[], bool inner[], ElasticMatrix3D* virt_matrix, float* virt_values[], bool virt_inner[], float outer_normal[], float scale) = 0;
		/*
		 * Returns type of the calculator
		 */
		virtual string getType() = 0;
		
	};
	
}

#endif	/* GCM_CONTACT_CALCULATOR_H_ */
