#ifndef _MSP_BUILTINS_H
#define _MSP_BUILTINS_H

#ifdef __clang__

#define __delay_cycles(n) \
    __asm__ volatile ( \
      "pushm.a #1, r13\n" \
      "mov     %[count], r13\n" \
      "dec     r13\n" \
      "jnz     $+2\n" \
      "popm.a  #1, r13\n" \
      "nop\n" \
      : : [count] "i" (n / 3 - 3) \
    )

#define __bic_SR_register_on_exit(bits) \
    __asm__ volatile ( \
        "bic     %[b],    24(r1)\n" \
        : : [b] "i" (bits) \
    )

#endif // __clang__

#endif // _MSP_BUILTINS_H
