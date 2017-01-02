// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2015 Qianyi Zhou <Qianyi.Zhou@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <Visualization/Visualizer/RenderOption.h>

namespace three {

class RenderOptionWithEditing : public RenderOption
{
public:
	RenderOptionWithEditing() {}
	~RenderOptionWithEditing() override {}

public:
	bool ConvertToJsonValue(Json::Value &value) const override;
	bool ConvertFromJsonValue(const Json::Value &value) override;

public:
	// Selection polygon
	Eigen::Vector3d selection_polygon_boundary_color_ =
			Eigen::Vector3d(0.3, 0.3, 0.3);
	Eigen::Vector3d selection_polygon_mask_color_ =
			Eigen::Vector3d(0.3, 0.3, 0.3);
	double selection_polygon_mask_alpha_ = 0.5;
	
	// PointCloud Picker
	double pointcloud_picker_sphere_size_ = 0.01;
};

}	// namespace three