//
// File: circular_trajectory_data.cpp
//
// Code generated for Simulink model 'circular_trajectory'.
//
// Model version                  : 1.4
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Tue Jan 15 20:41:42 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "circular_trajectory.h"
#include "circular_trajectory_private.h"

// Block parameters (auto storage)
P_circular_trajectory_T circular_trajectory_P = {
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

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<S3>/Step1'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Step1'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step1'

  10.0,                                // Expression: 10
                                       //  Referenced by: '<S3>/Constant'

  -5.0,                                // Expression: -5
                                       //  Referenced by: '<S3>/Constant1'

  6.0,                                 // Expression: 6
                                       //  Referenced by: '<S3>/Switch'

  0.2,                                 // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain'

  11.283185307179586,                  // Expression: 2*pi+5
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

  20.707963267948966,                  // Expression: 4*pi+pi/2+pi/2+5
                                       //  Referenced by: '<S3>/Step11'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S3>/Step11'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Step11'

  9.71238898038469,                    // Expression: 2*pi-pi/2+5
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

  19.137166941154071,                  // Expression: 4*pi+pi/2+5
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
