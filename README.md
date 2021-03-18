## DCNv2 with Pytorch 1.8+ & JIT Compilation

[![CI testing](https://github.com/tteepe/DCNv2/actions/workflows/ci-testing.yml/badge.svg)](https://github.com/tteepe/DCNv2/actions/workflows/ci-testing.yml)

## Requirements
- [PyTorch 1.8+](https://pytorch.org/get-started/locally/)
- [Ninja build](https://ninja-build.org)

```bash
pip install torch torchvision torchaudio

sudo apt-get install ninja-build
```

### Test
```bash
cd tests
python test_cuda.py  # run examples and gradient check on gpu
python test_cpu.py   # run examples and gradient check on cpu 
```
### Note
Now the master branch is for pytorch 1.x, you can switch back to pytorch 0.4 with,
```bash
git checkout pytorch_0.4
```

### Known Issues:
- [x] Gradient check w.r.t offset (solved)
- [ ] Backward is not reentrant (minor)

This is an adaption of the official [Deformable-ConvNets](https://github.com/msracver/Deformable-ConvNets/tree/master/DCNv2_op).

Update: all gradient check passes with **double** precision. 

Another issue is that it raises `RuntimeError: Backward is not reentrant`. However, the error is very small (`<1e-7` for 
float `<1e-15` for double), 
so it may not be a serious problem (?)

Please post an issue or PR if you have any comments.
