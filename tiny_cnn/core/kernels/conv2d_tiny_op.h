/*
    COPYRIGHT

    All contributions by Taiga Nomi
    Copyright (c) 2013, Taiga Nomi
    All rights reserved.

    All other contributions:
    Copyright (c) 2013-2016, the respective contributors.
    All rights reserved.

    Each contributor holds copyright over their respective contributions.
    The project versioning (Git) records all such contribution source information.

    LICENSE

    The BSD 3-Clause License


    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this
      list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

    * Neither the name of tiny-cnn nor the names of its
      contributors may be used to endorse or promote products derived from
      this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
    SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#pragma once

#include "tiny_cnn/core/framework/op_kernel.h"

namespace tiny_cnn {

class Conv2dCustomForwardOp : public core::OpKernel {
 public:
    explicit Conv2dCustomForwardOp(core::OpKernelConstruction* context)
        : core::OpKernel(context) {}

    void compute(core::OpKernelContext* context) override {

        nn_info("Running Conv2dCustomForwardOp");

        // TODO(edgar/nyanp): we should be able to do something like this
        //
        // const tensor_t& in_data = context->input(0);
        // const vec_t&          W = context->input(1);
        // const vec_t&          b = context->input(2);
        // tensor_t&      out_data = context->output(0);

    }
};

class Conv2dCustomBackwardOp : public core::OpKernel {
 public:
    explicit Conv2dCustomBackwardOp(core::OpKernelConstruction* context)
        : core::OpKernel(context) {}

    void compute(core::OpKernelContext* context) override {
        nn_info("Running Conv2dCustomBackwardOp");
    }
};

}  // namespace tiny_cnn