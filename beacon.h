/***********************************************************************************************//**
 * \file   beacon.h
 * \brief  Beacon advertisement
 ***************************************************************************************************
 * <b> (C) Copyright 2015 Silicon Labs, http://www.silabs.com</b>
 ***************************************************************************************************
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 **************************************************************************************************/

#ifndef BEACON_H
#define BEACON_H

#ifdef __cplusplus
extern "C" {
#endif

/***********************************************************************************************//**
 * \defgroup beacon Beacon
 * \brief Beacon Advertisement Service API
 *
 **************************************************************************************************/

/***********************************************************************************************//**
 * @addtogroup Services
 * @{
 **************************************************************************************************/

/***********************************************************************************************//**
 * @addtogroup beacon
 * @{
 **************************************************************************************************/


/***************************************************************************************************
  Public Macros and Definitions
***************************************************************************************************/

/***********************************************************************************************//**
 *  \brief  Setup advertising for Beaconing mode
***************************************************************************************************/
void bcnSetupAdvBeaconing(void);


/** @} (end addtogroup beacon) */
/** @} (end addtogroup Services) */

#ifdef __cplusplus
};
#endif

#endif /* BEACON_H */
