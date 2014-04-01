from jsonrpc import ServiceProxy
access = ServiceProxy("http://127.0.0.1:13932")
pwd = raw_input("Enter wallet passphrase: ")
access.walletpassphrase(pwd, 60)
