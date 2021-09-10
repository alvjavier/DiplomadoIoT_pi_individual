/*! @file : botones.h
 * @author  Ernesto Andres Rincon Cruz
 * @version 1.0.0
 * @date    4/09/2021
 * @brief   Driver para 
 * @details
 *
 */
#ifndef IOT_SDK_PERIPHERAL_BOTONES_H_
#define IOT_SDK_PERIPHERAL_BOTONES_H_
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "peripherals.h"
#include "fsl_gpio.h"
/*!
 * @addtogroup X
 * @{
 */
/*!
 * @addtogroup X
 * @{
 */
/*******************************************************************************
 * Public Definitions
 ******************************************************************************/

/*******************************************************************************
 * External vars
 ******************************************************************************/

/*******************************************************************************
 * Public vars
 ******************************************************************************/

/*******************************************************************************
 * Public Prototypes
 ******************************************************************************/
bool boton1leerEstado();
bool boton2leerEstado();
/** @} */ // end of X group
/** @} */ // end of X group

#endif /* IOT_SDK_PERIPHERAL_BOTONES_H_ */
