/* $Id: templateengine.py 2241 2006-05-22 07:58:58Z fischer $ */

///
/// @file        AbstractWorkerTest.cpp
/// @brief       CPPUnit-Tests for class AbstractWorker
/// @author      Author Name (email@mail.address)
/// @date        Created at 2010-11-01
/// 
/// @version     $Revision: 2241 $
/// @note        Last modification: $Date: 2006-05-22 09:58:58 +0200 (Mon, 22 May 2006) $
///              by $Author: fischer $
///

/*
 * Copyright (C) 2011 IBR, TU Braunschweig
 *
 * Written-by: Johannes Morgenroth <morgenroth@ibr.cs.tu-bs.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "AbstractWorkerTest.hh"



CPPUNIT_TEST_SUITE_REGISTRATION(AbstractWorkerTest);

/*========================== tests below ==========================*/

/*=== BEGIN tests for class 'AbstractWorker' ===*/
void AbstractWorkerTest::testInitialize()
{
	/* test signature (const string uri, bool async = false) */
	CPPUNIT_FAIL("not implemented");
}

void AbstractWorkerTest::testTransmit()
{
	/* test signature (const Bundle &bundle) */
	CPPUNIT_FAIL("not implemented");
}

void AbstractWorkerTest::testShutdown()
{
	/* test signature () */
	CPPUNIT_FAIL("not implemented");
}

/*=== END   tests for class 'AbstractWorker' ===*/

void AbstractWorkerTest::setUp()
{
}

void AbstractWorkerTest::tearDown()
{
}

