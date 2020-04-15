//
// File: Trajectory_generation_data.cpp
//
// Code generated for Simulink model 'Trajectory_generation'.
//
// Model version                  : 1.269
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Jan 14 12:40:16 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Trajectory_generation.h"
#include "Trajectory_generation_private.h"

// Block parameters (auto storage)
P_Trajectory_generation_T Trajectory_generation_P = {
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
                                       //  Referenced by: '<S14>/Out1'


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
  },                                   // Computed Parameter: Constant_Value_h
                                       //  Referenced by: '<S12>/Constant'


  {
    0.0,                               // ErrorPositionX
    0.0,                               // ErrorPositionY
    0.0,                               // ErrorPositionZ
    0.0,                               // ErrorVelociteX
    0.0,                               // ErrorVelociteY
    0.0                                // ErrorVelociteZ
  },                                   // Computed Parameter: Out1_Y0_g
                                       //  Referenced by: '<S13>/Out1'


  {
    0.0,                               // ErrorPositionX
    0.0,                               // ErrorPositionY
    0.0,                               // ErrorPositionZ
    0.0,                               // ErrorVelociteX
    0.0,                               // ErrorVelociteY
    0.0                                // ErrorVelociteZ
  },                                   // Computed Parameter: Constant_Value_e
                                       //  Referenced by: '<S11>/Constant'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step10'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step10'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step10'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Constant2'

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<S6>/Step11'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step11'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step11'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step1'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step1'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step1'

  10.0,                                // Expression: 10
                                       //  Referenced by: '<S6>/Step3'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step3'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step3'

  10.0,                                // Expression: 10
                                       //  Referenced by: '<S6>/Step6'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step6'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step6'

  2.0,                                 // Expression: 2
                                       //  Referenced by: '<S6>/Constant1'

  35.0,                                // Expression: 35
                                       //  Referenced by: '<S6>/Step7'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step7'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step7'

  35.0,                                // Expression: 35
                                       //  Referenced by: '<S6>/Step4'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step4'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step4'

  -5.0,                                // Expression: -5
                                       //  Referenced by: '<S6>/Constant4'

  50.0,                                // Expression: 50
                                       //  Referenced by: '<S6>/Step5'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step5'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step5'

  45.0,                                // Expression: 45
                                       //  Referenced by: '<S6>/Step12'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step12'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step12'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Constant3'

  50.0,                                // Expression: 50
                                       //  Referenced by: '<S6>/Step13'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S6>/Step13'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S6>/Step13'

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<S4>/Step'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S4>/Step'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S4>/Step'

  -5.0,                                // Expression: -5
                                       //  Referenced by: '<S4>/Constant3'

  20.0,                                // Expression: 20
                                       //  Referenced by: '<S4>/Step1'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S4>/Step1'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S4>/Step1'

  20.0,                                // Expression: 20
                                       //  Referenced by: '<S4>/Step4'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S4>/Step4'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S4>/Step4'

  35.0,                                // Expression: 35
                                       //  Referenced by: '<S4>/Step5'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S4>/Step5'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S4>/Step5'

  5.0,                                 // Expression: 5
                                       //  Referenced by: '<S5>/Step'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S5>/Step'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S5>/Step'

  -5.0,                                // Expression: -5
                                       //  Referenced by: '<S5>/Constant3'

  25.0,                                // Expression: 25
                                       //  Referenced by: '<S5>/Step1'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S5>/Step1'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S5>/Step1'

  25.0,                                // Expression: 25
                                       //  Referenced by: '<S5>/Step4'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S5>/Step4'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S5>/Step4'

  40.0,                                // Expression: 40
                                       //  Referenced by: '<S5>/Step5'

  1.0,                                 // Expression: 1
                                       //  Referenced by: '<S5>/Step5'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S5>/Step5'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Integrator'

  0.0,                                 // Expression: 0
                                       //  Referenced by: '<S3>/Integrator1'


  {
    0.0                                // Data
  },                                   // Computed Parameter: Constant_Value_h4
                                       //  Referenced by: '<S7>/Constant'


  {
    0.0                                // Data
  }                                    // Computed Parameter: Constant_Value_j
                                       //  Referenced by: '<S8>/Constant'

};

//
// File trailer for generated code.
//
// [EOF]
//
