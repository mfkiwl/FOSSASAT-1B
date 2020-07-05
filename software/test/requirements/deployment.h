/*
MIT License

Copyright (c) 2020 FOSSA Systems

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef DEPLOY_T_H
#define DEPLOY_T_H

extern void Deploy_TestRunner_Start();


/**
*	@brief Reference ID: 		DEPLOYT1
*			Description: 		Test the deployment sequence in scenarios; debugging, integration and jettison.
*			Successful result: 	Does the deployment sequence run correctly in these 3 scenarios?
								the debugging deployment sequence,
								integration and jettison sequences are different.
*/
extern void Deploy_T1();

/**
*	@brief Reference ID: 		DEPLOYT2
*			Description: 		Check that the deployment sequence writes to the EEPROM.
*			Successful result: 	When the deployment sequence runs in jettison mode,
								does it correctly save its state to the EEPROM?
*/
extern void Deploy_T2();

/**
*	@brief Reference ID: 		DEPLOYT3
*			Description: 		Check that the deployment sequence does not run if the EEPROM state has been set.
*			Successful result: 	If the deployment sequence has ran, does it run again?
*/
extern void Deploy_T3();

/**
*	@brief Reference ID: 		DEPLOYT4
*			Description: 		Check that the deployment sequence enable time is suitable.
*			Successful result: 	When the satellite powers the deployment mechanism, does it work correctly?
*/
extern void Deploy_T4();

/**
*	@brief Reference ID: 		DEPLOYT5
*			Description: 		Confirm that a system information transmission is sent before the deployment sequence begins.
*			Successful result: 	Before the deployment sequence begins,
								does it send a transmission to notify receivers that it is about to occur?
*/
extern void Deploy_T5();

/**
*	@brief Reference ID: 		DEPLOYT6
*			Description: 		Check that the deployment sequence transmits a success transmission afterwards.
*			Successful result: 	After the deployment sequence, does it tell receivers that it has occured?
*/
extern void Deploy_T6();

/**
*	@brief Reference ID: 		DEPLOYT7
*			Description: 		Check that the deployment system returns the correct value for its current state.
*			Successful result: 	When the satellite restarts, does it load the correct value from the EEPROM?
*/
extern void Deploy_T7();

#endif

