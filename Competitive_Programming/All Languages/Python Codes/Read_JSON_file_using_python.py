import json
  
r = open('data.json')
  
data = json.load(r)

for i in data['emp_details']:
    print(i)
  
r.close()
