emp.id=c(12,34,56,78,90)
emp.name=c("Jon","Tom","Sam","Joe","Nic")
emp.num=5
emp.list=list("ID"=emp.id,"Name"=emp.name,"Total Emp"=emp.num)
print(emp.list)
print(emp.list$Name)
emp.ages=list("Age"=c(23,34,45,56,67))
emp.list=c(emp.list,emp.ages)
print(emp.list)
