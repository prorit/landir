import http.server
import socketserver
import netifaces
import os

share_dir = "public"
os.chdir(share_dir)

PORT = 8080
local_ip = "localhost"

Handler = http.server.SimpleHTTPRequestHandler

with socketserver.TCPServer(("", PORT), Handler) as httpd:
  interfaces = netifaces.interfaces()
  for iface in interfaces:
    address = netifaces.ifaddresses(iface).get(netifaces.AF_INET, [])
    for addr in address:
      print(f"Interface {iface}, Server running at: http://{addr['addr']}:{PORT}")

  httpd.serve_forever()