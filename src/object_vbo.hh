//Vertex List
static const std::vector<GLfloat> floor_vbo {
        -1200.0, -80.0, 1200.0,
        1200.0, -80.0, 1200.0,
        -1200.0, -80.0, -1200.0,

        -1200.0, -80.0, -1200.0,
        1200.0, -80.0, 1200.0,
        1200.0, -80.0, -1200.0,
};

static const std::vector<GLfloat> surface_vbo {
        -1200.0, 0.0, 1200.0,
        1200.0, 0.0, 1200.0,
        -1200.0, 0.0, -1200.0,

        -1200.0, 0.0, -1200.0,
        1200.0, 0.0, 1200.0,
        1200.0, 0.0, -1200.0,
};

static const std::vector<GLfloat> uv_buffer_data
        { 0.0, 1.0,
          1.0, 1.0,
          0.0, 0.0,

          0.0, 0.0,
          1.0, 1.0,
          1.0, 0.0,
        };