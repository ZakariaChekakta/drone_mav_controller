//
// File: calculation_data.cpp
//
// Code generated for Simulink model 'calculation'.
//
// Model version                  : 1.3
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Sat Jan 12 03:02:42 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "calculation.h"
#include "calculation_private.h"

// Block parameters (auto storage)
P_calculation_T calculation_P = {
  {
    0.0,                               // Roll
    0.0,                               // Pitch
    0.0,                               // YawRate

    {
      0U,                              // Seq

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // FrameId_SL_Info

      {
        0.0,                           // Sec
        0.0                            // Nsec
      }                                // Stamp
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Thrust
  },                                   // Computed Parameter: Out1_Y0
                                       //  Referenced by: '<S8>/Out1'


  {
    0.0,                               // Roll
    0.0,                               // Pitch
    0.0,                               // YawRate

    {
      0U,                              // Seq

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // FrameId_SL_Info

      {
        0.0,                           // Sec
        0.0                            // Nsec
      }                                // Stamp
    },                                 // Header

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Thrust
  },                                   // Computed Parameter: Constant_Value
                                       //  Referenced by: '<S6>/Constant'


  {
    0.0,                               // ErrorPositionX
    0.0,                               // ErrorPositionY
    0.0,                               // ErrorPositionZ
    0.0,                               // ErrorVelociteX
    0.0,                               // ErrorVelociteY
    0.0                                // ErrorVelociteZ
  },                                   // Computed Parameter: Out1_Y0_h
                                       //  Referenced by: '<S7>/Out1'


  {
    0.0,                               // ErrorPositionX
    0.0,                               // ErrorPositionY
    0.0,                               // ErrorPositionZ
    0.0,                               // ErrorVelociteX
    0.0,                               // ErrorVelociteY
    0.0                                // ErrorVelociteZ
  },                                   // Computed Parameter: Constant_Value_d
                                       //  Referenced by: '<S5>/Constant'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<Root>/Integrator'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<Root>/Integrator1'


  {
    0.0                                // Data
  },                                   // Computed Parameter: Constant_Value_a
                                       //  Referenced by: '<S1>/Constant'


  {
    0.0                                // Data
  }                                    // Computed Parameter: Constant_Value_b
                                       //  Referenced by: '<S2>/Constant'

};

//
// File trailer for generated code.
//
// [EOF]
//
