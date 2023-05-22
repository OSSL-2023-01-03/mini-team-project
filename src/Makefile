CC = gcc
CFLAGS = -Wall

# 빌드 대상 파일들
SRCS = main.c login.c check.c crud.c movieInfo.c movieList.c people.c seat.c seatLeft.c
OBJS = $(SRCS:.c=.o)
EXEC = movie_theater

# 기본 빌드 명령어
all: $(EXEC)

# 실행 파일 생성
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# 개별 소스 파일 빌드
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 빌드된 파일 및 임시 파일 삭제
clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean
