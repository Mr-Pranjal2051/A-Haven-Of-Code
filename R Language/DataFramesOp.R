# df2=df[,!names(df)%in%c("vec3")]
# print(df2)
# df3=df[!df$vec1==4,]
# print(df3)
# print(df[1:2,])
# print(df[,1:2])
# print(df[1:2])
# df1=data.frame("Name"=c("ABC","DEF","ABC","JKL"),"Age"=c(23,34,45,56),"BG"=c("O+","A-","B+","O-"))
# df2=subset(df1,Name=="ABC" & Age<50)
# print(df1)
# print(df2)
vec1=c(1,2,3)
vec2=c("ABC","DEF","GHI")
vec3=c(12,23,34)
df=data.frame(vec1,vec2,vec3)
print(df)
df[3,1]=3.1
df[3,2]="JKL"
print(df)
