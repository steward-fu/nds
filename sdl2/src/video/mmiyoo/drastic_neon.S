    .global render_polygon_setup_perspective_steps

render_polygon_setup_perspective_steps:
    vpush {d8-d15}
0: 
    vld1.32 {d0-d3}, [r1 :128]! 
    vld1.32 {d8-d11}, [r2 :128]! 
    vld1.32 {d4-d7}, [r1 :128]! 
    vld1.32 {d12-d15}, [r2 :128]! 
    vrecpe.f32 q8, q4 
    vrecpe.f32 q9, q5 
    vrecpe.f32 q10, q6 
    vrecpe.f32 q11, q7 
    vrecps.f32 q12, q8, q4 
    vrecps.f32 q13, q9, q5 
    vrecps.f32 q14, q10, q6 
    vrecps.f32 q15, q11, q7 
    vmul.f32 q8, q8, q12 
    vmul.f32 q9, q9, q13 
    vmul.f32 q10, q10, q14 
    vmul.f32 q11, q11, q15 
    vrecps.f32 q12, q8, q4 
    vrecps.f32 q13, q9, q5 
    vrecps.f32 q14, q10, q6 
    vrecps.f32 q15, q11, q7 
    vmul.f32 q8, q8, q12 
    vmul.f32 q9, q9, q13 
    vmul.f32 q10, q10, q14 
    vmul.f32 q11, q11, q15 
    vmul.f32 q0, q0, q8 
    vmul.f32 q1, q1, q9 
    vmul.f32 q2, q2, q10 
    vmul.f32 q3, q3, q11 
    vcvt.s32.f32 q0, q0, #15 
    vcvt.s32.f32 q1, q1, #15 
    vcvt.s32.f32 q2, q2, #15 
    vcvt.s32.f32 q3, q3, #15 
    vmovn.i32 d0, q0 
    vmovn.i32 d1, q1 
    vmovn.i32 d2, q2 
    vmovn.i32 d3, q3 
    vst1.32 {d0-d3}, [r0 :128]! 
    subs r3, r3, #16 
    bgt 0b
    vpop {d8-d15} 
    bx lr 

