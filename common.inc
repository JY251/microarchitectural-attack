ifeq($(PLATFORM), x64)
	ARCH = amd64
ifeq($(PLATFORM), X64)
	ARCH = amd64
else
	ARCH = x86
endif

OUTDIR = ..\bin\$(ARCH)
OBJDIR = obj\$(ARCH)
SRCDIR = .

CC = cl
LIKNER = link
SIGNTOOL = signtool
ASM = D:\nasm\latest\nasm.exe
RD = rd /s /q
RM = del /q

CFLAGS = \
         /c \
         /0x \
         /W4 \
         /Zi \
         /Fo"$(OBJDIR)\\" \
         /Fd"$(OBJDIR)\\" \

LFLAGS = \
         /NOLOGO \
         /DEBUG \
         /INCREMENTAL:NO \

AFLAGS = \
         -g\
         -O0\
!IF "$(PLATFORM)"=="X64" || "$(PLATFORM)"=="x64"
  -fwin64\
!ELSE
  -fwin32\
!ENDIF