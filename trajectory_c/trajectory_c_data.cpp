//
// File: trajectory_c_data.cpp
//
// Code generated for Simulink model 'trajectory_c'.
//
// Model version                  : 1.15
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Dec 21 18:22:29 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "trajectory_c.h"
#include "trajectory_c_private.h"

// Block parameters (auto storage)
P_trajectory_c_T trajectory_c_P = {
  {
    {
      {
        0U,                            // Seq

        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              // FrameId

        {
          0U,                          // CurrentLength
          0U                           // ReceivedLength
        },                             // FrameId_SL_Info

        {
          0.0,                         // Sec
          0.0                          // Nsec
        }                              // Stamp
      },                               // Header

      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Position

        {
          0.0,                         // X
          0.0,                         // Y
          0.0,                         // Z
          0.0                          // W
        }                              // Orientation
      }                                // Pose
    },                                 // PositionDesired

    {
      {
        0U,                            // Seq

        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              // FrameId

        {
          0U,                          // CurrentLength
          0U                           // ReceivedLength
        },                             // FrameId_SL_Info

        {
          0.0,                         // Sec
          0.0                          // Nsec
        }                              // Stamp
      },                               // Header

      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Linear

        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        }                              // Angular
      }                                // Twist
    },                                 // VelociteDesired

    {
      {
        0U,                            // Seq

        {
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
          0U, 0U }
        ,                              // FrameId

        {
          0U,                          // CurrentLength
          0U                           // ReceivedLength
        },                             // FrameId_SL_Info

        {
          0.0,                         // Sec
          0.0                          // Nsec
        }                              // Stamp
      },                               // Header

      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Linear

        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        }                              // Angular
      }                                // Accel
    }                                  // AccelerationDesired
  },                                   // Computed Parameter: Constant_Value
                                       //  Referenced by: '<S1>/Constant'

  10.0,                                // Expression: 10
                                       //  Referenced by: '<S3>/Constant'

  6.0,                                 // Expression: 6
                                       //  Referenced by: '<S3>/Switch'

  0.2,                                 // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain'

  6.2831853071795862,                  // Expression: 2*pi
                                       //  Referenced by: '<S3>/Step10'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Step10'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step10'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave'

  15.707963267948966,                  // Expression: 4*pi+pi/2+pi/2
                                       //  Referenced by: '<S3>/Step11'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step11'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Step11'

  4.71238898038469,                    // Expression: 2*pi-pi/2
                                       //  Referenced by: '<S3>/Step9'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Step9'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step9'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave1'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave1'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave1'

  1.5707963267948966,                  // Expression: pi/2
                                       //  Referenced by: '<S3>/Sine Wave1'

  14.137166941154069,                  // Expression: 4*pi+pi/2
                                       //  Referenced by: '<S3>/Step12'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step12'

  0.0                                  // Expression: 0
                                       //  Referenced by: '<S3>/Step12'

};

//
// File trailer for generated code.
//
// [EOF]
//
