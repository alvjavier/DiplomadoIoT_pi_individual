/*! @file : sensor_de_luz.c
 * @author  Ernesto Andres Rincon Cruz
 * @version 1.0.0
 * @date    4/09/2021
 * @brief   Driver para 
 * @details
 *
*/
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "sensor_de_luz.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/


/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/
 void SensorDeLuzadcIniciarCaptura(void);
/*!
 * @brief esperar a que finalice el trabajo del ADC
 *
 */

 void SensorDeLuzEsperarResultado(void);
 /*!
  * @brief retorna el resultado de la conversion ADC para sensor de luz
  *
  */

/*******************************************************************************
 * External vars
 ******************************************************************************/


/*******************************************************************************
 * Local vars
 ******************************************************************************/


/*******************************************************************************
 * Private Source Code
 ******************************************************************************/
 void SensorDeLuzadcIniciarCaptura(void){
	 ADC16_SetChannelConfig(SENSOR_DE_LUZ_ADC16_BASE, SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP, &ADC0_channelsConfig[0]);
 
 }
	void SensorDeLuzEsperarResultado(void){
      while (0U == (kADC16_ChannelConversionDoneFlag
    		        & ADC16_GetChannelStatusFlags(SENSOR_DE_LUZ_ADC16_BASE, SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP)) )
      {

      }

	}


/*******************************************************************************
 * Public Source Code
 ******************************************************************************/

	uint32_t SensorDeLuzObtenerdatoADC(void){
		uint32_t resultadoADC;

		SensorDeLuzadcIniciarCaptura();
		SensorDeLuzEsperarResultado();

		resultadoADC=ADC16_GetChannelConversionValue(SENSOR_DE_LUZ_ADC16_BASE, SENSOR_DE_LUZ_ADC16_CHANNEL_GROUP);


		return(resultadoADC);
	}

