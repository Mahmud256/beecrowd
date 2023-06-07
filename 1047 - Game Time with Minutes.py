start_hour, start_minute, end_hour, end_minute = map(int,input().split())

start_time = 60*start_hour + start_minute
end_time = 60*end_hour + end_minute

final_time = end_time - start_time

final_hour = final_time//60

final_minute = final_time%60

if final_time <= 0:
    final_time += 24*60
    final_hour = final_time//60
    final_minute = final_time%60
    print(f"O JOGO DUROU {final_hour} HORA(S) E {final_minute} MINUTO(S)")
else:
    print(f"O JOGO DUROU {final_hour} HORA(S) E {final_minute} MINUTO(S)")
