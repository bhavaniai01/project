import mysql.connector
con=mysql.connector.connect(
    host="192.168.1.240",
    user="AIBATCH01",
    password="AI@123",
    database="ai_bhavanidb"
)

print(con)
result=con.cursor()
result.execute("show tables")
result_show=result.fetchall()
for x in result_show :
    print(x)

result.execute("select * from purchase")
result_show=result.fetchall()
for x in result_show :
    print(x)

result.execute("delete from purchase where id=4")
result_show=result.fetchall()
for x in result_show:
    print(x)
result.execute("select * from purchase")
result_show=result.fetchall()
for x in result_show :
    print(x)

# result.execute("insert into purchase (4,'priya','index','678') ")
# result_show=result.fetchall()
# for x in result_show:
#     print(x)
# result.execute("select * from purchase")
# result_show=result.fetchall()
# for x in result_show :
#     print(x)
result.execute("describe purchase")
result_show=result.fetchall()
for x in result_show :
    print(x)


    