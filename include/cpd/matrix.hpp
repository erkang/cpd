// cpd - Coherent Point Drift
// Copyright (C) 2016 Pete Gadomski <pete.gadomski@gmail.com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

/// \file matrix.hpp
/// \brief Eigen matrix typdefs.

#pragma once

#include <fgt.hpp>

namespace cpd {

/// Convenience typedef to a matrix that plays well with fgt.
typedef fgt::Matrix Matrix;

/// Convenience typedef to a reference to a matrix.
typedef fgt::MatrixRef MatrixRef;

/// Convenience typedef to a vector that plays well with fgt.
typedef fgt::Vector Vector;

/// Convenience typedef for a vector reference.
typedef fgt::VectorRef VectorRef;

/// Convenience typedef for a row vector.
typedef Eigen::RowVectorXd RowVector;

/// Reads a Eigen matrix from a file.
Matrix matrix_from_path(const std::string& path);
}
