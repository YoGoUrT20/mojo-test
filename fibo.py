import time

start_time = time.time()
a = 0
b = 1
limit = 100000
for i in range(1, 100): 
    print(a)
    tmp = b
    b = a + b
    a = tmp
print(a)
end_time = time.time()
elapsed_time = end_time - start_time
print('time') 
print(elapsed_time) 