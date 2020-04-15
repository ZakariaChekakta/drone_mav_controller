//
// File: wind_disturbance_data.cpp
//
// Code generated for Simulink model 'wind_disturbance'.
//
// Model version                  : 1.15
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Jan 14 21:53:37 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "wind_disturbance.h"
#include "wind_disturbance_private.h"

// Block parameters (auto storage)
P_wind_disturbance_T wind_disturbance_P = {
  {
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
    }                                  // Velocity
  },                                   // Computed Parameter: Constant_Value
                                       //  Referenced by: '<S1>/Constant'

  35.0,                                // Expression: 35
                                       //  Referenced by: '<S3>/Step3'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step3'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Step3'

  3.1415926535897931,                  // Expression: pi
                                       //  Referenced by: '<S3>/Constant6'

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<S3>/Constant12'

  55.0,                                // Expression: 55
                                       //  Referenced by: '<S3>/Constant7'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave4'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave4'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave4'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave4'

  1.35,                                // Expression: 1.35
                                       //  Referenced by: '<S3>/Gain4'

  2.0,                                 // Expression: 2
                                       //  Referenced by: '<S3>/Constant8'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave5'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave5'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave5'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave5'

  0.15,                                // Expression: 0.15
                                       //  Referenced by: '<S3>/Gain5'

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<S3>/Constant9'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave6'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave6'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave6'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave6'

  0.225,                               // Expression: 0.225
                                       //  Referenced by: '<S3>/Gain6'

  75.398223686155035,                  // Expression: pi*24
                                       //  Referenced by: '<S3>/Constant11'

  11.0,                                // Expression: 11
                                       //  Referenced by: '<S3>/Constant10'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave7'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave7'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave7'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave7'

  0.105,                               // Expression: 0.105
                                       //  Referenced by: '<S3>/Gain7'

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<S3>/Step'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Step'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step'

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<Root>/Step'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<Root>/Step'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<Root>/Step'

  35.0,                                // Expression: 35
                                       //  Referenced by: '<Root>/Step1'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<Root>/Step1'

  -1.0,                                // Expression: -1
                                       //  Referenced by: '<Root>/Step1'

  0.0                                  // Expression: 0
                                       //  Referenced by: '<Root>/Constant1'

};

//
// File trailer for generated code.
//
// [EOF]
//
