import http.server

PORT = 8000

class NoCacheHandler(http.server.SimpleHTTPRequestHandler):
    def end_headers(self):
        self.send_header("Cache-Control", "no-cache, no-store, must-revalidate")
        self.send_header("Expires", "0")
        super().end_headers()

if __name__ == "__main__":
    port = PORT   
    server_address = ("localhost", port)
    print(f"Serving on port {port}")
    httpd = http.server.HTTPServer(server_address, NoCacheHandler)
    httpd.serve_forever()
