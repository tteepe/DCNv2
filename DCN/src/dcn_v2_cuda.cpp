#include "cuda/vision.h"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("dcn_v2_forward", &dcn_v2_cuda_forward, "dcn_v2_forward");
  m.def("dcn_v2_backward", &dcn_v2_cuda_backward, "dcn_v2_backward");
  m.def("dcn_v2_psroi_pooling_forward", &dcn_v2_psroi_pooling_cuda_forward, "dcn_v2_psroi_pooling_forward");
  m.def("dcn_v2_psroi_pooling_backward", &dcn_v2_psroi_pooling_cuda_backward, "dcn_v2_psroi_pooling_backward");
}
