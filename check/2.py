from flask import Flask, request, jsonify
from flask_cors import CORS

app = Flask(__name__)
CORS(app)

@app.route('/chat', methods=['POST'])
def chat():
    user_msg = request.json.get('message', '')
    # Your logic here
    return jsonify({'reply': 'You said: ' + user_msg})
